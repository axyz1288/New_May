#include "XBoxJoystick.h"

XBoxJoystick::XBoxJoystick()
{
    is_deleted_thread = false;
    thread_getState = nullptr;
    printf("Class constructed: XBoxJoystick\n");
}

void XBoxJoystick::OpenXboxJoystick()
{
    SDL_Init(SDL_INIT_GAMECONTROLLER);

    if (SDL_NumJoysticks() > 0)
    {
        if (SDL_GameControllerOpen(0))
        {
            controller = SDL_GameControllerOpen(0);
            printf("Connect to controller successfully\n");
        }

        is_deleted_thread = false;
        thread_getState = new thread(&XBoxJoystick::GetState, this);
    }
    else
        printf("Could not open gamecontroller\n");
}

void XBoxJoystick::CloseXboxJoystick()
{
    if (SDL_NumJoysticks() > 0)
    {
        is_deleted_thread = true;
        thread_getState->join();
        delete thread_getState;
        SDL_GameControllerClose(controller);
    }
    else
        ;
}

void XBoxJoystick::GetState()
{
    while (!is_deleted_thread)
    {
        while (SDL_PollEvent(event))
        {
            LeftStickMotion();
            DPadMotion();
            ShoulderMotion();
            if (event->cbutton.type == SDL_CONTROLLERBUTTONUP)
                CWheel->Stop();
            this_thread::sleep_for(chrono::milliseconds(100));
        }
    }
}

void XBoxJoystick::LeftStickMotion()
{
    if (event->cbutton.type == SDL_CONTROLLERAXISMOTION)
    {
        int x = -SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTX);
        int y = -SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTY);
        short threshold = 20000;
        x = copysign(abs(x) - threshold < 0 ? 0 : abs(x) - threshold, x);
        y = copysign(abs(y) - threshold < 0 ? 0 : abs(y) - threshold, y);
        const int angle = atan2f(x, y) * Rad2Angle;
        if (x > 100 && y > 100)
            CMobilePlatform->Turn(angle);
    }
}

void XBoxJoystick::DPadMotion()
{
    if (event->cbutton.type == SDL_CONTROLLERBUTTONDOWN)
    {
        switch (event->cbutton.button)
        {
        case SDL_CONTROLLER_BUTTON_DPAD_UP:
            CMobilePlatform->MoveForward();
            break;
        case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
            CMobilePlatform->MoveBackward();
            break;
        case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
            CMobilePlatform->MoveLeft();
            break;
        case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
            CMobilePlatform->MoveRight();
            break;
        default:
            break;
        }
    }
}

void XBoxJoystick::ShoulderMotion()
{
    if (event->cbutton.type == SDL_CONTROLLERBUTTONDOWN)
    {
        switch (event->cbutton.button)
        {
        case SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
            CMobilePlatform->SelfTurn();
            break;
        case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
            CMobilePlatform->SelfTurn(0, -MobilePlatform::default_velocity);
            break;

        default:
            break;
        }
    }
}
#include "Body.h"

int main()
{
    Body *CBody = Body::getBody();

    this_thread::sleep_for(chrono::milliseconds(1000));

    return 0;
}
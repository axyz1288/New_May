#include "Gui/include/Form_ControlPanel.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication *app = new QApplication(argc, argv);
    Form_ControlPanel *form_control = new Form_ControlPanel();
    form_control->show();
    int result = app->exec();
    return result;
}

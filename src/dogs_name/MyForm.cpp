#include "MyForm.h";

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Dogs::MyForm form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
}

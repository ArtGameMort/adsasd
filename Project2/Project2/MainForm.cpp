#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // �������� ���������� ��������� �����
    Project2::MainForm^ startForm = gcnew Project2::MainForm();
    startForm->Show();

    // ������ �������� ����� ��������� ���������
    while (Application::OpenForms->Count > 0)
    {
        Application::DoEvents();
    }
}

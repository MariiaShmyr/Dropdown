#include "MyForm.h"
#include<iostream>
#include<windows.h>
#include "dos.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Проект2::MyForm form;
	Application::Run(%form);
}

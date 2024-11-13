#include "MainForm.h"
#include <cfloat>
using namespace System;
using namespace System::Windows::Forms;



void main(array<String^>^ args) {
	HotelRoom hotel;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CIS476Project2::MainForm form;
	Application::Run(% form);
}
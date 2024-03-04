#include "Loading.h"
#include "Opening.h"
#include "Game.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TicTacToe::Loading form2;
	Application::Run(% form2);
	TicTacToe::Opening form3;
	Application::Run(% form3);
	TicTacToe::Game form;
	Application::Run(% form);
}
#include "game.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	tictactoe::game forma;
	Application::Run(%forma);
	return(0);
}

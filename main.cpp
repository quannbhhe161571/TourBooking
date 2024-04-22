#include "ProgramController.h"

int main() {
	ProgramController* program = new ProgramController();
	program->run();
	delete program;
	return 0;
}
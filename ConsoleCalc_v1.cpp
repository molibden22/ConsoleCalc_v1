#include <iostream>
#include "Operator.h"
#include "Solution.h"

int main(int argc, char* args[])
{
		Solution solution;
		solution.readUserInput();
		solution.getArguments();
		solution.checkOperator();
		if (solution.validate()) {
			solution.printSolution();
			std::cout << solution.caluculateSolution() << std::endl;
		}
		std::cout << "Program ends here.";
}
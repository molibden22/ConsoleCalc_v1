#include "Solution.h"

Solution::Solution() {
	std::cout << "--- Welcome in calculator. ---\nType -h or -help to see the manual.\nType your data: ";
}

void Solution::calculatorHelpMenu() {
	std::cout << "---------- Calculator manual ----------\n"
		<< "> addition       - type: -a X Y\n"
		<< "> subtraction    - type: -s X Y\n"
		<< "> mulitplication - type: -m X Y\n"
		<< "> divison        - type: -d X Y\n"
		<< "-------------------------------------\n";
}

void Solution::readUserInput() {
	std::string str;
	std::getline(std::cin, str);
	input = str;
	
	// ===== TESTING ======
	//input = "-a fksnfkasnf -a  70.2 0 isdjaohsd   pdao 01000 10.55adjc";
	//input = "-d 0fksnf kasnf -a 70.2 isdjaohsd   pdao adjc7,8";

}

void Solution::getArguments()
{
	std::stringstream ss;
	std::string temp;
	double value;

	ss << input;
	while (!ss.eof()) {
		ss >> temp;
		if (operator_value == "") std::stringstream(temp) >> operator_value;
		if (std::stringstream(temp) >> value) {
			arguments.push_back(Argument(value));
		}
		temp.clear();
	}
	std::cout << std::endl;
	ss.clear();
}

void Solution::checkOperator() {

	if (operator_value == "-h") {
		calculatorHelpMenu();
	}
	else if (operator_value == "-help") {
		calculatorHelpMenu();
	}
	else if (operator_value == "-a") {
		operator_ = std::make_unique<Addition>();
	}
	else if (operator_value == "-s") {
		operator_ = std::make_unique<Subtraction>();
	}
	else if (operator_value == "-m") {
		operator_ = std::make_unique<Multiplication>();
	}
	else if (operator_value == "-d") {
		operator_ = std::make_unique<Division>();
	}
	else std::cout << "Error! The program expects exactly one option. Please, use -h or -help to see the manual.\n";
}

double Solution::caluculateSolution() {
	return operator_->calculate(arguments);
}

void Solution::printSolution() {
	return operator_->show_args(arguments);
}

bool Solution::validate() {
	return operator_ != nullptr && checkIfThereAreMinTwoValidArgumets() && operator_->validateInput(arguments);
}

bool Solution::checkIfThereAreMinTwoValidArgumets() {
	if (arguments.size() < 2) {
		std::cout << "Error. Program needs minimum 2 arguments." << std::endl;
		return false;
	}
	else return true;
}
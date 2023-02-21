#include "Division.h"

double Division::calculate(std::vector<Argument> arguments) {

	std::vector<double> args;

	std::transform(arguments.begin(), arguments.end(), std::back_inserter(args), [](Argument element) { return element.value_; });

	double result{ args.at(0) };

	for (size_t i = 1; i < args.size(); i++) {
		result = result / args.at(i);
	}

	return result;
}

void Division::show_args(std::vector<Argument> arguments) {

	for (size_t i = 0; i < arguments.size(); i++) {
		if (i == arguments.size() - 1) {
			std::cout << arguments.at(i) << " = ";
		}
		else std::cout << arguments.at(i) << " / ";
	}
}

bool Division::validateInput(std::vector<Argument> arguments) {

	return checkIfThereAreNoDivisionByZero(arguments);
}

bool Division::checkIfThereAreNoDivisionByZero(std::vector<Argument> arguments) {
	for (int i{ 1 }; i < arguments.size(); ++i) {
		if (arguments.at(i).value_ == 0)
			std::cout << "Error. Divided by 0 is forbidden." << std::endl;
		return false;
	}
	return true;
}



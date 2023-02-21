#include "Subtraction.h"

double Subtraction::calculate(std::vector<Argument> arguments) {

	std::vector<double> args;

	std::transform(arguments.begin(), arguments.end(), std::back_inserter(args), [](Argument element) { return element.value_; });

	double diffrence{ args.at(0) };

	for (size_t i = 1; i < args.size(); i++) {
		diffrence -= args.at(i);
	}
	return diffrence;
}

void Subtraction::show_args(std::vector<Argument> arguments) {
	for (size_t i = 0; i < arguments.size(); i++) {
		if (i == arguments.size() - 1) {
			std::cout << arguments.at(i) << " = ";
		}
		else std::cout << arguments.at(i) << " - ";
	}
}

bool Subtraction::validateInput(std::vector<Argument> arguments) {
	std::cout << "Subtraction validateInput method" << std::endl;
	return true;
}
#include "Addition.h"

double Addition::calculate(std::vector<Argument> arguments) {

	std::vector<double> args;

	std::transform(arguments.begin(), arguments.end(), std::back_inserter(args), [](Argument element) { return element.value_; });

	double sum = std::accumulate(args.begin(), args.end(), 0.0);

	return sum;
}

void Addition::show_args(std::vector<Argument> arguments) {

	for (size_t i = 0; i < arguments.size(); i++) {
		if (i == arguments.size() - 1) {
			std::cout << arguments.at(i) << " = ";
		}
		else std::cout << arguments.at(i) << " + ";
	}
}

bool Addition::validateInput(std::vector<Argument> arguments) {
	return true;
}



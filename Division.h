#pragma once
#include "Operator.h"
#include <algorithm>
#include <numeric>
#include <iterator>
#include <iostream>
#include <vector>


class Division :
	public Operator
{
public:

	double calculate(std::vector<Argument> arguments);

	void show_args(std::vector<Argument> arguments);

	bool validateInput(std::vector<Argument> arguments);

	bool checkIfThereAreNoDivisionByZero(std::vector<Argument> arguments);
};


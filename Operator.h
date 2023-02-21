#pragma once
#include "Argument.h"
#include <vector>
#include <iostream>

class Operator
{
public:
	virtual double calculate(std::vector<Argument> arguments) = 0;
	virtual void show_args(std::vector<Argument> arguments) = 0;
	virtual bool validateInput(std::vector<Argument> arguments) = 0;
};
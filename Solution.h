#pragma once
#include "Operator.h"
#include "Argument.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include <iostream>
#include <sstream>

class Solution
{
private:
	std::string input{};
	std::string operator_value{};
	std::unique_ptr<Operator> operator_{nullptr};
	std::vector<Argument> arguments;

public:
	Solution();
	
	void calculatorHelpMenu();
	void readUserInput();
	void getArguments();
	void checkOperator();

	double caluculateSolution();
	void printSolution();
	bool validate();
	bool checkIfThereAreMinTwoValidArgumets();
};
#pragma once
#include <iostream>

class Argument
{
	friend std::ostream& operator<<(std::ostream& os, Argument& rhs);

public:
	Argument(double value) : value_(value) {}

	double value_;

};

std::ostream& operator<<(std::ostream& os, Argument& rhs);

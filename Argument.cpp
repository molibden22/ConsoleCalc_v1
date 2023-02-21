#include "Argument.h"

std::ostream& operator<<(std::ostream& os, Argument& rhs) {
	os << rhs.value_;
	return os;
}


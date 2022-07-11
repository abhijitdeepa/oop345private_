
#pragma once

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"

namespace sdds {
	Vehicle* createInstance(std::istream&);
	void removeSpace(std::string &);
}


#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

namespace sdds {
	class Car : public Vehicle {
		std::string t_maker;
		std::string t_condition;
		double t_speed;
	public:
		Car();
		Car(const Car&);
		Car(Car&&);
		Car& operator=(const Car&);
		Car& operator=(Car&&);
		virtual ~Car()=default;
		Car(std::istream&);
		std::string condition() const;
		double topSpeed() const;
		void display(std::ostream& out) const;
		void removeSpace(std::string &); // to eliminate spaces in a string
		// add other required functions
	};


}

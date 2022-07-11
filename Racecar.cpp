
#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream>
#include "Racecar.h"
#include "Car.h"


namespace sdds {
	Racecar::Racecar(std::istream & in) : Car::Car(in)
	{
		std::string temp;
		getline(in, temp);
		m_booster = stod(temp);
	}
	void Racecar::display(std::ostream & out) const
	{
		Car::display(out);
		out << "*";
		
	}
	double Racecar::topSpeed() const
	{
		double boostedSpeed = Car::topSpeed() * (1 + m_booster);
		return boostedSpeed;
	}
}

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Vehicle.h"

namespace sdds {

	class Autoshop  {
		std::vector<Vehicle*> m_vehicles;
	public:
		Autoshop& operator+=(Vehicle* theVehicle);
		void display(std::ostream& out) const;
		~Autoshop();

		template<typename T>
		void select(T test, std::list<const Vehicle*>& vehicles) {
			for (auto i = m_vehicles.begin(); i != m_vehicles.end(); i++) {
				if (test(*i))
					
					vehicles.push_back(*i);
			}
				
			
		}
	};
}

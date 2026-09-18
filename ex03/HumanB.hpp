#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon* weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void setWeapon(Weapon& weapon);
		void attack() const;
};

#endif

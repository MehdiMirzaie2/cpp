#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
class	Weapon{
	private:
		std::string type;

	const std::string *getType(void);
	void setType(std::string _type);
}

#endif
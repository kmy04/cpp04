#include "Ice.hpp"

Ice::Ice()
{
	AMateria::_type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const & type)
{
	AMateria::_type = type;
	std::cout << "Ice string parameter constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice());
}
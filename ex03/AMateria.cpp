#include "AMateria.hpp"

AMateria::AMateria()
: _type("unknown")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
: _type(type)
{
	std::cout << "AMateria string parameter constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter& target) {
	(void)target;
	std::cout << "There is no materia to attack" << std::endl;
}
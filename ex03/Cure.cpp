#include "Cure.hpp"

#include "Cure.hpp"

Cure::Cure()
{
	AMateria::_type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const & type)
{
	AMateria::_type = type;
	std::cout << "Cure string parameter constructor called" << std::endl;
}

Cure::Cure(const Cure& other) {
	(void)other;
	_type = "cure";
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds" << " *" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}
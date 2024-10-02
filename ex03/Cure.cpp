#include "Cure.hpp"

#include "Cure.hpp"

Cure::Cure()
: AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const & type)
{
	_type = type;
	std::cout << "Cure string parameter constructor called" << std::endl;
}

Cure::Cure(const Cure& other) {
	_type = other._type;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other){
		_type = other._type;
		std::cout << "Cure copy assignment operator called" << std::endl;
	}
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

AMateria& Cure::operator=(const AMateria& other) {
	if (this != &other) {
		const Cure* ptr = dynamic_cast<const Cure*>(&other);
		if (ptr == NULL)
			std::cout << "Cannot assigment other type, this type is Cure" << std::endl;
		else {
			std::cout << "AMateria Cure copy assignment operator called" << std::endl;
			*this = *ptr;
		}
	}
	return (*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds" << " *" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}
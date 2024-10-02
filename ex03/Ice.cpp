#include "Ice.hpp"

Ice::Ice()
: AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const & type)
{
	_type = type;
	std::cout << "Ice string parameter constructor called" << std::endl;
}

Ice::Ice(const Ice& other) {
	_type = other._type;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other){
		_type = other._type;
		std::cout << "Ice copy assignment operator called" << std::endl;
	}
	return (*this);
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

AMateria& Ice::operator=(const AMateria& other) {
	if (this != &other) {
		const Ice* ptr = dynamic_cast<const Ice*>(&other);
		if (ptr == NULL)
			std::cout << "Cannot assigment other type, this type is Ice" << std::endl;
		else {
			std::cout << "AMateria Ice copy assignment operator called" << std::endl;
			*this = *ptr;
		}
	}
	return (*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}
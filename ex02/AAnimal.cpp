#include "AAnimal.hpp"

AAnimal::AAnimal()
: _type("basic") {
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
: _type(other._type) {
	std::cout << "AAnimal Copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other) {
		_type = other._type;
		std::cout << "AAnimal Copy assignment operator called" << std::endl;
	}
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called" << std::endl;
}

const std::string& AAnimal::getType() const {
	return _type;
}
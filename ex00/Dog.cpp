#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) {
	_type = other._type;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		_type = other._type;
		std::cout << "Dog Copy assignment operator called" << std::endl;
	}
	return (*this);}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}
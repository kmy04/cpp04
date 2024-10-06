#include "Dog.hpp"

Dog::Dog() 
: Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& other) {
	_type = other._type;
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		_type = other._type;
		std::cout << "Dog copy assignment operator called" << std::endl;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}
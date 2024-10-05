#include "Dog.hpp"

Dog::Dog() 
: Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& other) {
	_type = other._type;
	brain = new Brain(*other.brain);
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		_type = other._type;
		delete brain;
		brain = new Brain(*other.brain);
		std::cout << "Dog Copy assignment operator called" << std::endl;
	}
	return (*this);}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}
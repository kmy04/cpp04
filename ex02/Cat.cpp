#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
	_type = "cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) {
	_type = other._type;
	brain = new Brain(*other.brain);
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		_type = other._type;
		delete brain;
		brain = new Brain(*other.brain);
		std::cout << "Cat Copy assignment operator called" << std::endl;
	}
	return (*this);
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow!" << std::endl;
}
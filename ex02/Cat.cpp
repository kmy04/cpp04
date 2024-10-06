#include "Cat.hpp"

Cat::Cat() 
: Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& other) {
	_type = other._type;
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		_type = other._type;
		std::cout << "Cat copy assignment operator called" << std::endl;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow!" << std::endl;
}
#include "Cat.hpp"

Cat::Cat() 
: Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& other) {
	_type = other._type;
	std::cout << "Cat Copy constructor called" << std::endl;
	brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		_type = other._type;
		std::cout << "Cat Copy assignment operator called" << std::endl;
		delete brain;
		brain = new Brain(*other.brain);
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

Brain* Cat::getBrain() const {
	return (brain);
}
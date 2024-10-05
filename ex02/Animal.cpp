#include "Animal.hpp"

Animal::Animal()
: _type("basic") {
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const std::string& type)
: _type(type) {
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
: _type(other._type) {
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		_type = other._type;
		std::cout << "Animal Copy assignment operator called" << std::endl;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

const std::string& Animal::getType() const {
	return _type;
}
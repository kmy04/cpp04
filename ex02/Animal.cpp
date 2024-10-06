#include "Animal.hpp"

Animal::Animal()
: _type("basic") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& type)
: _type(type) {
	std::cout << "Animal parameter constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
: _type(other._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		_type = other._type;
		std::cout << "Animal copy assignment operator called" << std::endl;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

const std::string& Animal::getType() const {
	return _type;
}
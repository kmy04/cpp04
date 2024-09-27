#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown WrongAnimal") {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makes a generic sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}
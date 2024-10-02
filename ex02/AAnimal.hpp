#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected :
	std::string _type;
public :
	AAnimal();
	AAnimal(const std::string& type);
	AAnimal(const AAnimal& other);s
	AAnimal& operator=(const AAnimal& other);
	virtual ~AAnimal();

	const std::string& getType() const;
	virtual void makeSound() const = 0;
};

#endif
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
private:
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
protected:
    std::string type;
public:
    WrongAnimal();

    virtual ~WrongAnimal();

    void makeSound() const;

    std::string getType() const;
};

#endif
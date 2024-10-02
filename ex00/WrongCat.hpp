#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);
public:
    WrongCat();

    ~WrongCat();

    void makeSound() const;
};

#endif
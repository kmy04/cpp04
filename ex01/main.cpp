#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void leaks() {
// 	system("leaks Animal");
// }

int main()
{
	// atexit(leaks);
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;

    Dog originalDog;
    Dog copiedDog = originalDog;

    Cat originalCat;
    Cat copiedCat = originalCat;

    std::cout << std::endl;

    delete j;
    delete i;

    std::cout << std::endl;

}
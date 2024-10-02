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

    delete j;
    delete i;

	std::cout << std::endl;

	const Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    std::cout << "Sound test" << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << animals[i]->getType() << ": ";
        animals[i]->makeSound();
    }

	std::cout << std::endl;

    // 배열의 객체 삭제
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

	std::cout << std::endl;

	std::cout << "brain deap copy test" << std::endl;
	Dog a;
	Dog b = a;

	std::cout << a.getBrain() << std::endl;
	std::cout << b.getBrain() << std::endl;


    std::cout << std::endl;

}
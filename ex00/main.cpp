#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // 고양이 소리 출력
    j->makeSound(); // 강아지 소리 출력
    meta->makeSound(); // 기본 동물 소리 출력

    delete meta;
    delete j;
    delete i;

    std::cout << "\nTesting WrongAnimal and WrongCat" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " " << std::endl;

    wrongCat->makeSound(); // WrongCat이지만 WrongAnimal의 소리 출력
    wrongMeta->makeSound(); // WrongAnimal의 소리 출력

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
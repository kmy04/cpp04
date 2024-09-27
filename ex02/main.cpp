#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void leaks() {
// 	system("leaks Animal");
// }

int main() {
	// atexit(leaks);

	// 추상클래스인지 확인용 코드
	// AAnimal animal;

	// Dog와 Cat 객체 생성
    const AAnimal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    // 소리 출력
    for (int i = 0; i < 4; i++) {
        std::cout << animals[i]->getType() << ": ";
        animals[i]->makeSound();
    }

    // 배열의 객체 삭제
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    // 깊은 복사 테스트
    std::cout << "\nDeep copy test:" << std::endl;
    Dog originalDog;
    Dog copiedDog = originalDog; // 깊은 복사

    return 0;
}
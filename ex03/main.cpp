#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"

// void leaks() {
// 	system("leaks Materia");
// }

int main()
{
	// atexit(leaks);
	std::cout << "------learnMateria test------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "------createMateria, equip test------" << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	for (int i = 0; i < 3; i++) {
		tmp = src->createMateria("ice");
		me->equip(tmp);
	}
	std::cout << std::endl;

	std::cout << "------use test------" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	std::cout << "------unequip test------" << std::endl;
	me->unequip(2);
	me->unequip(2);
	me->unequip(5);
	std::cout << std::endl;

	std::cout << "------destructor------" << std::endl;
	delete bob;
	delete me;
	delete src;
	std::cout << std::endl;


	std::cout << "------부모를 이용한 대입 연산 테스트------" << std::endl;
	std::cout << "------constructor------" << std::endl;
	AMateria *a = new Cure();
	AMateria *b = new Ice();
	AMateria *c = new Cure();
	std::cout << std::endl; 

	std::cout << "------copy assignment operator------" << std::endl;
	*a = *b;
	*a = *c;
	*b = *c;
	std::cout << std::endl;

	std::cout << "------destructor------" << std::endl;
	delete a;
	delete b;
	delete c;
	std::cout << std::endl;

	// 이 테스트를 진행할 때는 
	// 1. 위에 코드를 주석
	// 2. 아래 코드를 주석 해제
	// 2. Cure, Ice의 상속받은 부모의 할당 연산자를 주석,
	// 3. 부모의 순수 가상 할당 연산자를 주석
	// 4. 주석돼있는 할당 연산자의 주석 해제

	// std::cout << "------다른 type끼리는 대입을 막은 이유------" << std::endl;
	// std::cout << "------constructor------" << std::endl;
	// AMateria *d = new Cure();
	// AMateria *e = new Ice();
	// ICharacter* test = new Character("test");
	// std::cout << std::endl;

	// std::cout << "------copy assignment operator------" << std::endl;
	// *d = *e;
	// std::cout << std::endl;

	// std::cout << "------가장 중요한 부분------" << std::endl;
	// std::cout << d->getType() << std::endl;
	// d->use(*test);

	return 0;
}

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
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
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
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(2);
	me->unequip(2);
	me->unequip(5);
	delete bob;
	delete me;
	delete src;

	std::cout << "대입 연산" << std::endl;
	AMateria *a = new Cure();
	AMateria *b = new Ice();
	AMateria *c = new Cure();

	*a = *b;
	*a = *c;
	*b = *c;

	delete a;
	delete b;
	delete c;

	return 0;
}

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		_materias[i] = NULL;
	}
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < 4; i++) {
		if (other._materias[i] != NULL)
			_materias[i] = other._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
		if (other._materias[i] != NULL)
			_materias[i] = other._materias[i]->clone();
		else
			_materias[i] = NULL;
		}
		std::cout << "MateriaSource copy assignment operator called" << std::endl;
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) 
		delete _materias[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; i++) {
		if (_materias[i] == NULL) {
			_materias[i] = materia;
			return ;
		}
	}
	std::cout << "You can no longer learn any more Materia." << std::endl;
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; ++i) {
		if (_materias[i] != NULL && _materias[i]->getType() == type) {
			return _materias[i]->clone();
		}
	}
	return NULL;
}
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	_materias = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		_materias[i] = NULL;
	}
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	_materias = new AMateria*[4];
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
	delete[] _materias;
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; i++) {
		if (_materias[i] == NULL) {
			_materias[i] = materia;
			return ;
		}
	}
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
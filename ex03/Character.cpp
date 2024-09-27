#include "Character.hpp"

Character::Character()
: _name("unknown")
{
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
	_floor = new AMateria*[50];
	for (int i = 0; i < 50; i++) {
		_inventory[i] = NULL;
	}
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string& name)
: _name(name)
{
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
	_floor = new AMateria*[50];
	for (int i = 0; i < 50; i++) {
		_floor[i] = NULL;
	}
	std::cout << "Character string parameter constructor called" << std::endl;
}

Character::Character(const Character& other)
: _name(other._name)
{
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		if (other._inventory[i] != NULL)
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	_floor = new AMateria*[50];
	for (int i = 0; i < 50; i++) {
		if (other._floor[i] != NULL)
			_floor[i] = other._floor[i]->clone();
		else
			_floor[i] = NULL;
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& other)
{
	if (this != &other) {
		for (int i = 0; i < 4; ++i)
            delete _inventory[i];
		for (int i = 0; i < 4; i++) {
			if (other._inventory[i] != NULL)
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
		for (int i = 0; i < 4; ++i)
            delete _inventory[i];
		for (int i = 0; i < 50; i++) {
			if (other._floor[i] != NULL)
				_floor[i] = other._floor[i]->clone();
			else
				_floor[i] = NULL;
		}
		_name = other._name;
		std::cout << "Character copy assignment operator called" << std::endl;
	}
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
		delete _inventory[i];
	delete[] _inventory;
	for (int i = 0; i < 50; ++i)
		delete _floor[i];
	delete[] _floor;
	std::cout << "Charater destructor called" << std::endl;
}

std::string const& Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)	{
		if (_inventory[i] == NULL) {
			_inventory[i] = m;
			std::cout << "Successfully equipped " << m->getType() << " in slot " << i << "." << std::endl;
			return;
		}
	}
	std::cout << "Your inventory is full, unable to equip " << m->getType() << "." << std::endl;
	delete m;
}

void Character::unequip(int idx) {
	if ( 0 <= idx && idx < 4) {
		int i;
		if (_inventory[idx] == NULL) {
			std::cout << "The slot is empty, nothing to unequip." << std::endl;
			return ;
		}
		for (i = 0; i < 50; i++) {
			if (_floor[i] == NULL) {
				_floor[i] = _inventory[idx];
				std::cout << "Successfully unequipped " << _inventory[idx]->getType() << " from slot " << idx << "." << std::endl;
				break ;
			}
		}
		if (i == 50)
			std::cout << "the floor is full cannot discard any metaria." << std::endl;
		else
			_inventory[idx] = NULL;
	}
	else
		std::cout << "Invalid slot index: " << idx << ". Please enter a value between 0 and 3." << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL) {
		_inventory[idx]->use(target);
	}
}
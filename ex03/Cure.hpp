#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
private :
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);
public :
	Cure();
	Cure(std::string const & type);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
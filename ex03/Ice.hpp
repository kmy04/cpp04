#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
public :
	Ice();
	Ice(std::string const & type);
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	~Ice();

	virtual AMateria& operator=(const AMateria& other);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
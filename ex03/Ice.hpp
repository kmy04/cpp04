#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
private :
	Ice& operator=(const Ice& other);
public :
	Ice();
	Ice(std::string const & type);
	Ice(const Ice& other);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
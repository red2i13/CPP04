#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public :
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &copy);
		virtual ~WrongAnimal(void);
		WrongAnimal const &operator = (WrongAnimal const &other);
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif
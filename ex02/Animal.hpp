#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
class Animal
{
	protected:
		std::string type;
	public :
		Animal(void);
		Animal(Animal const &copy);
		virtual ~Animal(void);
		Animal const &operator = (Animal const &other);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif
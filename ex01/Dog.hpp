#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal{
	private:
		Brain *ideas;
	public :
		Dog(void);
		Dog(Dog const &copy);
		~Dog(void);
		Dog const &operator = (Dog const &other);
		void makeSound(void) const ;

};

#endif
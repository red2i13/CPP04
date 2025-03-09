#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"
class Cat : public Animal
{
	private:
		Brain *ideas;
	public :
		Cat(void);
		Cat(Cat const &copy);
		~Cat(void);
		Cat const &operator = (Cat const &other);
		void makeSound(void) const;
};

#endif
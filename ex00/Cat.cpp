#include "Cat.hpp"

Cat::Cat(void) : Animal(){
	type = "Cat";
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	*this = copy;
}

Cat::~Cat(void) {}

Cat const	&Cat::operator = (Cat const &other)
{
	(void)other;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meaaaaawwww" << std::endl;
}

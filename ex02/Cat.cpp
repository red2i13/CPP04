#include "Cat.hpp"

Cat::Cat(void) : Animal(){
	std::cout << "Cat constructor is called" << std::endl;
	std::cout << "allocation the heap allocation for Brain" << std::endl;
	type = "Cat";
	ideas = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = copy;
}

Cat::~Cat(void) {
	std::cout << "Cat deconstructor is called" << std::endl;
	std::cout << "Freeing the heap allocation for Brain" << std::endl;
	delete ideas;
}

Cat const	&Cat::operator = (Cat const &other)
{
	std::cout << "Cat Copy Assignment Constructor" << std::endl;

	(void)other;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meaaaaawwww" << std::endl;
}

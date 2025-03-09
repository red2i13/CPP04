#include "Cat.hpp"

Cat::Cat(void) : Animal(){
	std::cout << "Cat constructor is called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = copy;
}

Cat::~Cat(void) {
	std::cout << "Cat deconstructor is called" << std::endl;
}

Cat const	&Cat::operator = (Cat const &other)
{
	std::cout << "Cat Copy assingment Constructor" << std::endl;
	this->type = other.type;	
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meaaaaawwww" << std::endl;
}

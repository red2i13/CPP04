#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Dog constructor is called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	(void)copy;
	*this = copy;
}

Dog::~Dog(void) {
	std::cout << "Dog deconstructor is called" << std::endl;
}

Dog const	&Dog::operator = (Dog const &other){
	std::cout << "Dog Copy assingment Constructor" << std::endl;
	this->type = other.type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "WOOF WOOF GRRRRR" << std::endl;
}

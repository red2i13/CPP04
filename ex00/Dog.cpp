#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	type = "Dog";
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	(void)copy;
	*this = copy;
}

Dog::~Dog(void) {}

Dog const	&Dog::operator = (Dog const &other){
	(void)other;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "WOOF WOOF GRRRRR" << std::endl;
}

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Dog constructor is called" << std::endl;
	std::cout << "allocation the heap allocation for Brain" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = copy;
}

Dog::~Dog(void) {
	std::cout << "Dog deconstructor is called" << std::endl;
	std::cout << "Freeing the heap allocation for Brain" << std::endl;
	delete brain;
}

Dog const	&Dog::operator = (Dog const &other){
	std::cout << "Dog Copy assingment Constructor" << std::endl;
	this->type = other.type;
	*brain = *other.brain;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "WOOF WOOF GRRRRR" << std::endl;
}

#include "Cat.hpp"

Cat::Cat(void) : Animal(){
	std::cout << "Cat constructor is called" << std::endl;
	std::cout << "allocation the heap allocation for Brain" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	this->brain = new Brain();
	*brain = *copy.brain;
	this->type = copy.type;
}

Cat::~Cat(void) {
	std::cout << "Cat deconstructor is called" << std::endl;
	std::cout << "Freeing the heap allocation for Brain" << std::endl;
	delete brain;
}

Cat const	&Cat::operator = (Cat const &other)
{
	std::cout << "Cat Copy Assignment Constructor" << std::endl;
	this->type = other.type;
	this->brain = new Brain();
	*brain = *other.brain;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meaaaaawwww" << std::endl;
}

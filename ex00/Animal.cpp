#include "Animal.hpp"

Animal::Animal(void) {}

Animal::Animal(Animal const &copy)
{
	*this = copy;
}

Animal::~Animal(void) {}

Animal const	&Animal::operator = (Animal const &other){
	(void)other;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "Animal doesn't makes a sound" << std::endl;
}

std::string Animal::getType(void) const{
	return(type);
}

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal constructor is called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = copy;
}

Animal::~Animal(void) {
	std::cout << "Animal deconstructor is called" << std::endl;
}

Animal const	&Animal::operator = (Animal const &other){
	std::cout << "Animal Copy assingment Constructor" << std::endl;
	type = other.type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "Animal doesn't makes a sound" << std::endl;
}

std::string Animal::getType(void) const{
	return(type);
}

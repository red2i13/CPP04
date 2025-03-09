#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy){
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	(void)copy;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal deconstructor is called" << std::endl;
}

WrongAnimal const	&WrongAnimal::operator = (WrongAnimal const &other){
	std::cout << "WrongAnimal Copy assingment Constructor" << std::endl;
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong Animal sound Aouwef" << std::endl;
}

std::string WrongAnimal::getType(void) const{
	return(type);
}

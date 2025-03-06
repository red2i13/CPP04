#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {}

WrongAnimal::WrongAnimal(WrongAnimal const &copy){
	(void)copy;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void) {}

WrongAnimal const	&WrongAnimal::operator = (WrongAnimal const &other){
	(void)other;
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong Animal sound Aouwef" << std::endl;
}

std::string WrongAnimal::getType(void) const{
	return(type);
}

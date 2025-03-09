#include "WrongCat.hpp"



WrongCat::WrongCat(void) : WrongAnimal(){
	std::cout << "WrongCat constructor is called" << std::endl;
	type = "Wrong Cat";
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat deconstructor is called" << std::endl;
}

WrongCat const	&WrongCat::operator = (WrongCat const &other)
{
	std::cout << "WrongCat Copy assingment Constructor" << std::endl;
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meaaaaawwww" << std::endl;
}

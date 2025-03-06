#include "WrongCat.hpp"



WrongCat::WrongCat(void) : WrongAnimal(){
	type = "Wrong Cat";
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	*this = copy;
}

WrongCat::~WrongCat(void) {

}

WrongCat const	&WrongCat::operator = (WrongCat const &other)
{
	(void)other;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meaaaaawwww" << std::endl;
}

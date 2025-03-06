#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"



//todo add message in constructor and destroctor
int main(){

	//ANIMAL CLASS AND DERIVED CLASS DOG AND CAT
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete  meta;
	delete j;
	delete i;

	//TEST WRONGANIMAL CLASS
	const WrongAnimal* t_s = new WrongCat();
	const WrongAnimal* t_base = new WrongAnimal();

	t_s->makeSound();
	t_base->makeSound();
	delete t_base;
	delete t_s;
	return 0;
}
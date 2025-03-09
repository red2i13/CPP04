#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"



int main(){
	//initializing animal object gives error

	// Animal f;
	Animal *savana[10];

	//instances of dogs
	for(int i = 0; i < 5; i++){
		savana[i] = new Dog();
	}
	//instances of cats
	for(int i = 5 ; i < 10 ; i++){
		savana[i] = new Cat();
	}
	savana[0]->makeSound();
	savana[5]->makeSound();

	//deleting the animals
	for(int i = 0; i < 10; i++){
		delete savana[i];
	}
	return 0;
}
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"



int main(){
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

	//deleting the animals
	for(int i = 0; i < 10; i++){
		delete savana[i];
	}
	return 0;
}
#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain is created" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor is called" << std::endl;
}

Brain const	&Brain::operator = (Brain const &other) {
	for(int i = 0; i < 100; i++){
		this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

void Brain::Set_idea(std::string taught){
	int i;
	for(i = 0; i < 100; i++){
		if(!ideas[i].empty())
			break;
	}
	if(i == 99){
		std::cout << "Brain full of taughts" << std::endl;
		return;
	}
	ideas[i] = taught;
}
std::string Brain::Get_last_idea(void){
	int i;
	for(i = 0; i < 100; i++){
		if(!ideas[i].empty())
			break;
	}
	if(i == 0){	
		std::cout << "The brain is empty like new" << std::endl;
		return(NULL);
	}
	return(ideas[i]);
	
}
void Brain::Print_ideas(void){
	for(int i = 0; ideas[i].empty(); i++){
		std::cout << "taught Num [" << i << "] " << ideas[i] << std::endl;
	}
}
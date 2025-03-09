#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain is created" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	(void)copy;
	*this = copy;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor is called" << std::endl;
}

Brain const	&Brain::operator = (Brain const &other){
	(void)other;
	return (*this);
}

void Brain::Set_idea(std::string taught){
	int i;
	for(i = 0; i < 100; i++){
		if(!str[i].empty())
			break;
	}
	if(i == 99){
		std::cout << "Brain full of taughts" << std::endl;
		return;
	}
	str[i] = taught;
}
std::string Brain::Get_last_idea(void){
	int i;
	for(i = 0; i < 100; i++){
		if(!str[i].empty())
			break;
	}
	if(i == 0){	
		std::cout << "The brain is empty like new" << std::endl;
		return(NULL);
	}
	return(str[i]);
	
}
void Brain::Print_ideas(void){
	for(int i = 0; str[i].empty(); i++){
		std::cout << "taught Num [" << i << "] " << str[i] << std::endl;
	}
}
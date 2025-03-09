#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string str[100];
	public :
		Brain(void);
		Brain(Brain const &copy);
		~Brain(void);
		Brain const &operator = (Brain const &other);

		void Set_idea(std::string taught);
		std::string Get_last_idea(void);
		void Print_ideas(void);
};

#endif
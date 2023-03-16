#ifndef RPN_HPP
#define RPN_HPP

#include <fstream>
#include <stdexcept>
#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

class Rpn
{
	private :
		std::stack<int>	_pile;

	public :
		Rpn();
		Rpn(std::string input);
		Rpn(Rpn const &src);
		Rpn &operator=(Rpn const &a);
		~Rpn();

	private :
		void	_ope(char opera);
		void	_is_correct(std::string token);
		void	_print_step(char token);
		
	
};

#endif
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <stdexcept>
#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrate.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &a);

		// methods
		virtual void	execute(Bureaucrate const &executor) const;
		// getters
		std::string	getTarget() const;
		// setters

		// exeptions


};
#endif
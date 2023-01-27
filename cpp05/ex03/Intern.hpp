#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Bureaucrate.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();
		Intern	&operator=(Intern const &a);

		// methods
		Form	*makeForm(std::string formName, std::string formTarget);
		Form	*new_presidentialPardonForm(std::string target);
		Form	*new_robotomyRequestForm(std::string target);
		Form	*new_SrubberyCreationForm(std::string target);
		// getters
		// setters
		// exeptions


};
#endif
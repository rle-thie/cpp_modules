#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <stdexcept>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Form.hpp"
#include "Bureaucrate.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &a);

		// methods
		virtual void	execute(Bureaucrate const &executor) const;
		// getters
		std::string	getTarget() const;
		// setters

		// exeptions


};
#endif
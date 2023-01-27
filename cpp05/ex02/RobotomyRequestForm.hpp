#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <stdexcept>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Form.hpp"
#include "Bureaucrate.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &a);

		// methods
		virtual void	execute(Bureaucrate const &executor) const;
		// getters
		std::string	getTarget() const;
		// setters

		// exeptions


};
#endif
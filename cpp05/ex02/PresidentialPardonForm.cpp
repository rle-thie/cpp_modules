#include "PresidentialPardonForm.hpp"

// -------------- Methods ----------------------------------------
void	PresidentialPardonForm::execute(Bureaucrate const &executor) const
{
	if (getSigned() == false)
		throw Form::NotSignedExeption();
	if (executor.getGrade() > this->getGradeE())
		throw Form::GradeTooLowExeption();
	else
	{
		std::cout << executor.getName() << " execute " << this->getName() << std::endl;
		std::cout << getTarget() << " a été pardonné par Zaphod Beeblebrox" << std::endl;
	}
}



// -------------- getter & setter -----------------------
std::string	PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}


// ---------------constructor & destructor & operator-------------------------
PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5)
{
	this->_target = "NULL";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("Presidential Pardon Form", 25, 5)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &a)
{
	// if same
	if (&a == this)
		return (*this);
	else
	{
		_target = a.getTarget();
	}
	return (*this);
}

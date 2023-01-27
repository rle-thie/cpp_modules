#include "RobotomyRequestForm.hpp"

// -------------- Methods ----------------------------------------
void	RobotomyRequestForm::execute(Bureaucrate const &executor) const
{
	if (getSigned() == false)
		throw Form::NotSignedExeption();
	if (executor.getGrade() > this->getGradeE())
		throw Form::GradeTooLowExeption();
	else
	{
		std::cout << executor.getName() << " execute " << this->getName() << std::endl;
		srand(time(NULL));
		if (rand() % 2 == 0)
		{
			std::cout << "*bruits de perceuse*" << std::endl;
			std::cout << getTarget() << " a été robotisé" << std::endl;
		}
		else
		{
			std::cout << "l'operation a échoué" << std::endl;
		}
	}
}



// -------------- getter & setter -----------------------
std::string	RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}


// ---------------constructor & destructor & operator-------------------------
RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45)
{
	this->_target = "NULL";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("Robotomy Request Form", 72, 45)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &a)
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

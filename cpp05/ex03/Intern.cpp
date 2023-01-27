#include "Intern.hpp"

// -------------- Methods ----------------------------------------
Form	*Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string	tab[3] = {
		"robotomy request",
		"shrubbery creation",
		"presidential pardon"
	};
	Form	*(Intern::*index_fonction[3])(std::string) = {
		&Intern::new_robotomyRequestForm,
		&Intern::new_SrubberyCreationForm,
		&Intern::new_presidentialPardonForm
	};
	for (int i = 0; i < 3; i++)
	{
		if (tab[i] == formName)
		{
			std::cout << "Intern creates " << formName << " form" << std::endl;
			return ((this->*index_fonction[i])(formTarget));
		}
	}
	throw Form::FormNotFoundExeption();
	return (NULL);


}

Form	*Intern::new_SrubberyCreationForm(std::string target)
{
	Form *newForm;
	newForm = new ShrubberyCreationForm(target);
	return (newForm);
}

Form	*Intern::new_presidentialPardonForm(std::string target)
{
	Form *newForm;
	newForm = new PresidentialPardonForm(target);
	return (newForm);
}

Form	*Intern::new_robotomyRequestForm(std::string target)
{
	Form *newForm;
	newForm = new RobotomyRequestForm(target);
	return (newForm);
}


// -------------- getter & setter -----------------------


// ---------------constructor & destructor & operator-------------------------
Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(Intern const &a)
{
	// if same
	if (&a == this)
		return (*this);
	else
	{
	}
	return (*this);
}

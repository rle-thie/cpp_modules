#include "ShrubberyCreationForm.hpp"

// -------------- Methods ----------------------------------------
void	ShrubberyCreationForm::execute(Bureaucrate const &executor) const
{
	if (getSigned() == false)
		throw Form::NotSignedExeption();
	if (executor.getGrade() > this->getGradeE())
		throw Form::GradeTooLowExeption();
	else
	{

		std::string	filename;
		filename = getTarget() + "_shrubbery";
		std::ofstream file;
		file.open(filename.c_str());
		if (!file)
		{
			std::cerr << "Can't open file : " << filename << std::endl;
			return ;
		}
		std::string buff = "       _-_\n";
		buff += "    /~~   ~~\\\n";
		buff += " /~~         ~~\\\n";
		buff += "{               }\n";
		buff += " \\  _-     -_  /\n";
		buff += "   ~  \\\\ //  ~\n";
		buff += "_- -   | | _- _\n";
		buff += "  _ -  | |   -_\n";
		buff += "......// \\\\......_\n";
		file << buff;
		file.close();
		std::cout << executor.getName() << " execute " << this->getName() << std::endl;
	}
}



// -------------- getter & setter -----------------------
std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}


// ---------------constructor & destructor & operator-------------------------
ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Form", 145, 137)
{
	this->_target = "NULL";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Form", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("Shrubbery Form", 145, 137)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &a)
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

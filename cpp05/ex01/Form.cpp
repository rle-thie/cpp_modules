#include "Form.hpp"

// ------------Methode----------------------------
void	Form::signForm(Bureaucrate &b)
{
	if (_signed == true)
		throw Form::AlreadySignedExeption();
	if (b.getGrade() > _gradeS)
		throw Form::GradeTooLowExeption();
	else
		setSigned(true);
}


// ------------accesor------------------------------
// setters
int	Form::setGradeS(int grade)
{
	if (grade <= 0)
		throw Form::GradeTooHighExeption();
	else if (grade > 150)
		throw Form::GradeTooLowExeption();
	return (grade);
}

int	Form::setGradeE(int grade)
{
	if (grade <= 0)
		throw Form::GradeTooHighExeption();
	else if (grade > 150)
		throw Form::GradeTooLowExeption();
	return (grade);
}

void	Form::setSigned(bool b)
{
	this->_signed = b;
}

// getter
int	Form::getGradeE(void) const
{
	return (_gradeE);
}

int	Form::getGradeS(void) const
{
	return (_gradeS);
}

bool Form::getSigned(void) const
{
	return (_signed);
}

std::string	Form::getName() const
{
	return (_name);
}

// ----------------Constructor--------------------------
Form::Form() : _signed(false), _name("NULL"), _gradeS(150), _gradeE(150)
{	
	// std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string name, int gradeS, int gradeE) : _signed(false), _name(name), _gradeS(setGradeS(gradeS)), _gradeE(setGradeE(gradeE))
{
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(Form const &src) : _name(src._name), _gradeS(src._gradeS), _gradeE(src._gradeE)
{
	// std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

// ----------------Operator---------------------------

Form	&Form::operator=(Form const &a)
{	
	// std::cout << "Form '=' operator called" << std::endl;
	if (this == &a)
		return (*this);
	_signed = a._signed;
	return *this;
}

std::ostream	&operator<<( std::ostream	&o, Form const & i )
{
	o << i.getName() << ", form sign grade : " << i.getGradeS() << ", form exec grade : " << i.getGradeE();
	if (i.getSigned() == true)
		o << ", is signed" << std::endl;
	else
		o << ", is not signed" << std::endl;
	return o;
}

// ---------------exeption------------------------
const char*	Form::GradeTooHighExeption::what() const throw()
{
	return ("Form grade too high !");
}

const char*	Form::GradeTooLowExeption::what() const throw()
{
	return ("Form grade too low !");
}

const char*	Form::AlreadySignedExeption::what() const throw()
{
	return ("Form already signed !");
}
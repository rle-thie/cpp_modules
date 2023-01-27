#include "Bureaucrate.hpp"

// ---------methods---------------------
void	Bureaucrate::signForm(Form &f)
{
	f.signForm(*this);
	std::cout << this->getName() << " signed " << f.getName() << std::endl;
}

// ---------incrementation--------------

void	Bureaucrate::decrGrade()
{
	setGrade(_grade + 1);
}

void	Bureaucrate::incrGrade()
{
	setGrade(_grade - 1);
}

// ---------setter--------------

void	Bureaucrate::setGrade(int grade)
{
	// this->_grade = grade;
	if (grade >= 151)
		throw Bureaucrate::GradeTooLowExeption();
	else if (grade <= 0)
		throw Bureaucrate::GradeTooHighExeption();
	else
		this->_grade = grade;
}

// ---------getter--------------

std::string	Bureaucrate::getName() const
{
	return (this->_name);
}

int	Bureaucrate::getGrade() const
{
	return (this->_grade);
}

// -------------------------------

Bureaucrate::Bureaucrate() : _name("NULL"), _grade(150)
{
	// std::cout << "Bureaucrate Default constructor called" << std::endl;
}

Bureaucrate::Bureaucrate(std::string const name, int grade) : _name(name)
{
	std::cout << "Bureaucrate constructor called" << std::endl;
	setGrade(grade);
}

Bureaucrate::Bureaucrate(Bureaucrate const &src)
{
	// std::cout << "Bureaucrate copy constructor called" << std::endl;
	*this = src;
}

Bureaucrate::~Bureaucrate()
{
	std::cout << "Bureaucrate destructor called" << std::endl;
}

// -------------------------------------------

Bureaucrate	&Bureaucrate::operator=(Bureaucrate const &a)
{	
	// std::cout << "Bureaucrate '=' operator called" << std::endl;
	if (this == &a)
		return (*this);
	_grade = a.getGrade();
	return *this;
}

std::ostream	&operator<<( std::ostream &o, Bureaucrate const &i)
{
	o << i.getName() << ", bureaucrate grade " << i.getGrade() << std::endl;
	return o;
}

// ------------ exeption ----------

const char*	Bureaucrate::GradeTooHighExeption::what() const throw()
{
	return ("Can't assign grade, it's too high !");
}

const char*	Bureaucrate::GradeTooLowExeption::what() const throw()
{
	return ("Can't assign grade, it's too low !");
}
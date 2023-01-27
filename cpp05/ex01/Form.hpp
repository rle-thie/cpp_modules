#ifndef FORM_HPP
#define FORM_HPP

#include <stdexcept>
#include <iostream>
#include <string>
#include "Bureaucrate.hpp"

class Bureaucrate;

class Form
{
	public:
		Form();
		Form(const std::string name, int gradeS, int gradeE);
		Form(Form const &src);
		~Form();
		Form	&operator=(Form const &a);

		// methods
		void	signForm(Bureaucrate &b);

		// getters
		std::string	getName(void) const;
		int			getGradeS() const;
		int			getGradeE() const;
		bool		getSigned() const;

		// setters
		int		setGradeS(int grade);
		int		setGradeE(int grade);
		void	setSigned(bool b);

		// exeptions
		class AlreadySignedExeption : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
		class GradeTooHighExeption : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowExeption : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

	private:
		bool				_signed;
		std::string const	_name;
		int	const			_gradeS;
		int const			_gradeE;

};
std::ostream &	operator<<( std::ostream & o, Form const & i );

#endif
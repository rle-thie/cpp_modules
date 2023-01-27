#ifndef BUREAUCRATE_HPP
#define BUREAUCRATE_HPP

#include <stdexcept>
#include <iostream>
#include <string>

class Bureaucrate
{
	private:
		std::string const _name;
		int			_grade;

	public:
		Bureaucrate();
		Bureaucrate(std::string const name, int grade);
		Bureaucrate(Bureaucrate const &src);
		Bureaucrate	&operator=(Bureaucrate const &a);
		~Bureaucrate();

		// getters
		std::string	getName(void) const;
		int			getGrade(void) const;
		// setters
		void		setGrade(int grade);

		void		incrGrade();
		void		decrGrade();

		// exeptions
		class GradeTooLowExeption : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class GradeTooHighExeption : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};


};
std::ostream &	operator<<( std::ostream & o, Bureaucrate const & i );

#endif

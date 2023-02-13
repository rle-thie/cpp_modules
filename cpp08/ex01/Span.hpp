#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
	private:
		unsigned int const	_size;
		std::vector<int>	_tab;
		// bool				_added;
	
	public:

		Span();
		Span(unsigned int const N);
		Span(Span const &src);
		~Span();

		// operator
		Span				&operator=(Span const &a);

		// getter
		unsigned int		getSize() const;

		// methods
		void				displayTab();
		void				addNumber(int i);
		void				fillSpan(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int					shortestSpan();
		int					longestSpan();

};

#endif
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	const std::string getName();
	int getGrade();
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form);
	Bureaucrat&	operator=(const Bureaucrat &c);

	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &c);
	~Bureaucrat();

	class GradeTooHighException:public std::exception
	{
		private:
			std::string msg;
		public:
			GradeTooHighException(Bureaucrat::GradeTooHighException &cpy);
			GradeTooHighException();
			~GradeTooHighException() throw();
			const char *what() const throw();
	};
	class GradeTooLowException:public std::exception
	{
		private:
			std::string msg;
		public:
			GradeTooLowException(Bureaucrat::GradeTooLowException &cpy);
			GradeTooLowException();
			~GradeTooLowException() throw();
			const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bc);

#endif // !BUREAUCRAT_H
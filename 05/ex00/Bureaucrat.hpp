#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
#include <iostream>

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	std::string getName();
	int getGrade();
	Bureaucrat();
	Bureaucrat();
	~Bureaucrat();
	class GradeTooHighException:public std::exception
	{
		private:
			/* data */
		public:
			GradeTooHighException(/* args */);
			GradeTooHighException();
			~GradeTooHighException();
	};
	class GradeTooLowException:public std::exception
	{
		private:
			/* data */
		public:
			GradeTooLowException(/* args */);
			GradeTooLowException();
			~GradeTooLowException();
	};
};

#endif // !BUREAUCRAT_H
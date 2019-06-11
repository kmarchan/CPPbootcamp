#include "Bureaucrat.hpp"
#include <iostream>
// Constructors
Bureaucrat::Bureaucrat(const Bureaucrat &c) {*this = c;}
Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException &cpy){(void)cpy;}
Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException &cpy){(void)cpy;}
Bureaucrat::Bureaucrat(std::string name, int grade): name(name) {
	this->grade = grade;
	Bureaucrat::GradeTooHighException tooHigh;
	Bureaucrat::GradeTooLowException tooLow;
	if (grade < 1)
		throw tooHigh;
	else if (grade > 150)
		throw tooLow;
}
Bureaucrat::GradeTooHighException::GradeTooHighException(){
	this->msg = "Grade is less than 1";
}
Bureaucrat::GradeTooLowException::GradeTooLowException(){
	this->msg = "Grade is more than 150";
}
// Deconstructors
Bureaucrat::~Bureaucrat() {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

// Getters
const std::string Bureaucrat::getName() {return this->name;}
int Bureaucrat::getGrade() {return this->grade;}

// Overloads
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &c) {
	this->grade = c.grade;
	return(*this);
}

std::ostream& operator<< (std::ostream& os, Bureaucrat& c) {
	os << c.getName() << " grade:" << c.getGrade() << std::endl;
	return (os);
}
 
// Methods
void Bureaucrat::incrementGrade(){
	Bureaucrat::GradeTooHighException high;

	this->grade--;
	if (this->grade < 1)
		throw (high);
}

void Bureaucrat::decrementGrade(){
	Bureaucrat::GradeTooLowException low;
	this->grade++;
	if (this->grade > 150)
		throw (low);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is less than 1");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is more than 150");
}
#include "Form.hpp"

// Constructors
Form::Form(): name(""), isSigned(false), signGrade(0), executeGrade(0) {}
Form::Form(Form &other):signGrade(other.signGrade),executeGrade(other.executeGrade) {*this = other;}
Form::Form(std::string const name, int sgrade, int egrade): name(name), isSigned(false), signGrade(sgrade), executeGrade(egrade){
	Form::GradeTooHighException high;
	Form::GradeTooLowException low;

	if (this->signGrade < 1 || this->executeGrade < 1)
		throw high;
	else if (this->signGrade > 150 || this->executeGrade > 150)
		throw low;
}

Form::GradeTooHighException::GradeTooHighException(){this->_msg = "Grade is too high";}
Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const &other){(void)other;}
Form::GradeTooLowException::GradeTooLowException(){this->_msg = "Grade is too low";}
Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &other){(void)other;}

// Deconstructor
Form::~Form(){}
Form::GradeTooHighException::~GradeTooHighException() throw(){}
Form::GradeTooLowException::~GradeTooLowException() throw(){}

// Overrides
Form &Form::operator=(const Form &form) {
	this->isSigned = form.getSigned();
	return (*this);
}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(Form::GradeTooHighException const &th){
	this->_msg = th._msg;
	return(*this);
}

Form::GradeTooLowException&	Form::GradeTooLowException::operator=(Form::GradeTooLowException const &th){
	this->_msg = th._msg;
	return(*this);
}

// Getters
std::string Form::getName(void) const {return(this->name);}
bool Form::getSigned(void) const{return(this->isSigned);}
int	Form::getSignGrade(void) const{return(this->signGrade);}
int	Form::getExecuteGrade(void) const{return(this->executeGrade);}

// Exception
const char*	Form::GradeTooHighException::what() const throw() {return ("Grade is too high");}
const char*	Form::GradeTooLowException::what() const throw() {return ("Grade is too low");}

void	Form::beSigned(Bureaucrat& bc) {
		Form::GradeTooLowException low;
		Form::GradeTooHighException high;

		if (this->isSigned == true)
		{
			std::cout << bc.getName() << " already signed " << std::endl;
			return;
		}
		if (bc.getGrade() > this->getSignGrade())
			throw low;
		if (bc.getGrade() > this->getExecuteGrade())
			throw low;
		this->isSigned = true;
		std::cout << bc.getName() << " succesfully signed" << std::endl;
}
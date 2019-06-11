#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresedentialPardonForm.hpp"
#include "Intern.hpp"

Intern::Intern()
{
	return;
}

Intern::Intern(Intern &other)
{
	*this = other;
	return;
}

Intern::~Intern(void)
{
	return;
}

Intern &Intern::operator=(Intern const &rhs) 
{
	(void)rhs;
	return (*this);
}

enum class formType {president, robotomy, shrubbery};

Form        *Intern::makeForm(std::string formName, std::string formTarget)
{
    if (formName == "presidential pardon") {
		std::cout << "Intern creates a Presidential Pardon Form \n";
		return(new PresidentialPardonForm(formTarget));

	} else if (formName == "robotomy request") {
		std::cout << "Intern creates a Robotomy Request Form \n";
		return(new RobotomyRequestForm(formTarget));

	} else if (formName == "shrubbery creation") {
		std::cout << "Intern creates a Shrubbery Creation Form \n";
		return(new ShrubberyCreationForm(formTarget));

	} else {
		std::cout << "Intern doesn't know the " << formName << " form." << std::endl;
	}
	return NULL;
}
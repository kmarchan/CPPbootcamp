#include "RobotomyRequestForm.hpp"

// Constructor
RobotomyRequestForm::RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(std::string targetForm): Form(targetForm, 72, 45) {this->targetForm = targetForm;}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other){*this = other;}

// Deconstructor
RobotomyRequestForm::~RobotomyRequestForm(){}

// Override
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form){
	(void)form;
	return(*this);
}

// Member Functions
void RobotomyRequestForm::execute(Bureaucrat const &rhs) const
{
	(void)rhs;
	std::cout << "drill sound" << std::endl;
	srand(time(0));
	switch(rand() % 2) {
		case 0: {
			std::cout << this->targetForm << " has been robotomized successfully " << std::endl;
			break;
		}
		case 1: {
			std::cout << this->targetForm << " has failed " << std::endl;
			break;
		}
		default:{
			std::cout << this->targetForm  << " has an ERROR " << std::endl;
			break;
		}
	}
}

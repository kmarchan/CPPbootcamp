#ifndef ROBOT_H
# define ROBOT_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string targetForm;
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string targetForm);
	RobotomyRequestForm(RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &r);
	void execute(Bureaucrat const &rhs) const;
};

#endif
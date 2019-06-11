#ifndef FORM_H
# define FORM_H
#include <iostream>

class Form
{
private:
	const std::string name;
	bool	isSigned;
	const int		gradeToSign;
	const int		gradeToExecute;

public:
	Form(/* args */);
	~Form();
};


#endif // !FORM_H

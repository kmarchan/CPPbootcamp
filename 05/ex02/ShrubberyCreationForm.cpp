#include "ShrubberyCreationForm.hpp"
#include <fstream>

// Constuctor

ShrubberyCreationForm::ShrubberyCreationForm() {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string targetForm): Form(targetForm, 145, 137) {this->_targetForm = targetForm;}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other){*this = other;}

// Deconstructor

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// Overload
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form){
	(void)form;
	return(*this);
}

// Member Method
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getExecuteGrade()))
	{
		std::string tree =	"                                            .__ ._       \\_.\r\n                                     _, _.  '  \\/   \\.-  /\r\n                                      \\/     .-_`   // |/     \\,\r\n                     .-\"\"\"\"-.          \\.   '   \\`. ||  \\.-'  /\r\n                    F        Y        .-.`-(   _/\\ V/ \\\\//,-' >-'   ._,\r\n                   F          Y   .__/   `. \\.   ' J   ) ./  / __._/\r\n                  J         \\, I    '   _/ \\  \\  | |  / /  .'-'.-' `._,\r\n           (       L   \\_.--.| \\_.      ' .___ `\\: | / .--'.-'\"     \\\r\n         \\ '\\    .  L   /    \\\\/        ._/`-.`  \\ .'.' .'---./__   '\r\n    \\__  '\\ ) \\._/   `-.__. ` \\\\_. '   .---.  \\     /  /  ,   `  `\r\n  --'  \\\\  ): // \\,            `-.`__.'     `- \\  /   / _/-.---.__.- .\r\n     _.-`.'/ /'\\_, ._     >--.-\"\"'____.--\"`_     '   /.'..' \\   \\   _/`\r\n _ .---._\\ \\'/ '__./__.-..  / .-|(    x_.-'___  |   :' /    _..---_' \\\r\n .:' /`\\ `. `..'.--'\\      /.' /`-`._  `-,'   ` '   I '_.--'__--..___.--._.-\r\n     `  `. `\\/'/  _.   _.-'      _.____./ .-.--\"\"-. .-\"    ' _..-.---'   \\\r\n  -._ .--.\\ / /-./     /   .---'-//.___. .-'       \\__ .--.  `    `.     '`-\r\n ,--'/.-. ^.   .-.--.  ` _/    _//     ./   _..   .'  `.    \\ \\    |_.\r\n    /' | >.   ' | \\._.-       '    _..'  `.' . `.       )    | |\\  `\r\n  ./ \\ \\'  ) c| /  \\     \\_..  .--'    ,\\ \\_/`  :    )  (`-. `.|`\\\\\r\n   \\'  / ,-.  | ` ./`  ._/ `\\\\'.--.,-((  `.`.__ |   _/   \\    |)  `--._/`\r\n______'\\   |  < __________  //'  //  _)   )/-._`.  (,-')  )  / \\_.    /\\. _____\r\n           |  |        .__./    //  '\\  |//    `.\\ '\\ (  (  <`   ._  '\r\n           >  |      _.  /   ..-\\ _    _/ \\_.  \\ `\\    \\_ `---.-'__\r\n        . /  `-   _.'        /   `   _/|       J  /`     `-,,-----.`-.\r\n            '  .:'          '`      '          < `   f  I //        `\u00AD\\_,\r\n              '                         \\.     J        I/\\_.        ./\r\n                                        `:     I  .:    K  `          `\r\n                                         `,   J         L\r\n                                           .  F  .-'    J\r\n                                           .  I  (.   . I _.-.._\r\n   '                                  _.---.J/      :'   L -'\r\n .:.                                     _.-'_.)     ` `-.`---.,_.\r\n:<                                  .--\"\"   .F' J) `.`L.__`-.___\r\n.:                                         Y ..Z     ))   `--'  `-\r\n.                                            . '    :'\r\n                                             .x,.\r\n                                             .:<.,\r\n                                              :J.,`\r\n                                            . ;.+K,:.\r\n                                               .,L+.,";
		std::ofstream outFile(this->_targetForm + "_shrubbery");
		outFile << tree;

		std::cout << "Shrubbery Form has been created by " << executor.getName() << std::endl;
	}
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must sign this form first." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}
#include "Form.hpp"
#include "Bureaucrat.hpp"
int main(void)
{

    std::cout << "AUTHORIZED" << std::endl;
    try
    {
        Bureaucrat vasya("Philip", 100);
        Form paper("Spoon", 150, 150);


        vasya.signForm(paper);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "UNAUTHORIZED" << std::endl;
    try
    {
        Bureaucrat    borya("Xeno", 5);
        Form        law("Leaf", 1, 1);


        borya.signForm(law);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "NO SIGNATURE NEEDED" << std::endl;
    try
    {
        Bureaucrat borya("Sam", 100);
        Form paper("Leaf", 150, 150);

        borya.signForm(paper);
        borya.signForm(paper);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
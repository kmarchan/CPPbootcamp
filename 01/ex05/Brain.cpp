#include <sstream>
#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string Brain::identify() {
    std::stringstream get_the_address;
    std::string address;
    get_the_address << this;
    address = get_the_address.str();
    return(address);
}

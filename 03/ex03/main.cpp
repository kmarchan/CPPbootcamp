#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
	FragTrap ft("ClapTrap");
	ScavTrap st("Scavies");
	

	ft.takeDamage(40);
	ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
	ft.beRepaired(10);
	ft.rangedAttack("Skag");
	std::cout << "\n" << std::endl;
	st.takeDamage(40);
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.beRepaired(10);
	st.rangedAttack("Skag");
	return 0;
}

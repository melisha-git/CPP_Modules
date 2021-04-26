# include "Human.hpp"

void Human::meleeAttack(std::string const& target) {
	std::cout << target << " is attacked by melee attack\n";
}

void Human::rangedAttack(std::string const& target) {
	std::cout << target << " is attacked by range attack\n";
}

void Human::intimidatingShout(std::string const& target) {
	std::cout << target << " is attacked by a intimidating shout\n";
}

void Human::action(std::string const & action_name, std::string const& target) {
	int index = 0;

	while (!action_name.empty() && !target.empty()) {
		void (Human::*fcnPtr[3])(std::string const& target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
		std::string pullFunctions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
		while (index < 2 && pullFunctions[index].compare(action_name))
			index++;
		while ((pullFunctions[index].compare(action_name) == 0))
		{
			(this->*fcnPtr[index])(target);
			break ;
		}
		break ;
	}
}

//Lost fortune
//A personalized adventure

#include <iostream>
#include <string>

int main()
{
	const int GOLD_PIECES = 900;
	int adventure, killed, survivors;
	std::string leader;

	//get information
	std::cout << "Welcome to Lost Fortune" << std::endl;
	std::cout << "Please enter the following for your personalized adventure" << std::endl;

	std::cout << "Enter the number of Adventurers in your party: ";
	std::cin >> killed;
	survivors = adventure - killed;
	std::cout << "enter your last name: ";
	std::cin >> leader;

	//The story so far.
	std::cout << "\nA brave group of " << adventure << "set out on a quest " << std::endl;
	std::cout << "-- in search of the lost treasure of the ancient Dwarves" << std::endl;
	std::cout << "The group was led by th legendary paladin. " << leader << std::endl;

	std::cout << "\nAlong the way, a band of marading ogres ambused the party. " << std::endl;
	std::cout << "All fought bravely under the command of " << leader << std::endl;
	std::cout << ", and the ogres were defeated, but at the cost, but at the cost. " << std::endl;
	std::cout << "of the adventurers, " << killed << " were vanquished, " << std::end;

	std::cout << "leaving just " << survivors << " in the group.\n" << std::endl;
	std::cout << "\nThe party was about to give up all hope. " << std::endl;
	std::cout << "they stumbled upon a buried fortune. " << std::endl;
	std::cout << "so the adventures split the " << GOLD_PIECES << " gold pieces." << std::endl;
	std::cout << leader << " held on to the extra " << (GOLD_PIECES % survivors) << std::endl;
}
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	int number;
	int guess;
	int guess2;
	int die;

	int tries;
	int tries2;
	int tries3;

	int UserInput;

	std::string answer;

	int hard = 1, medium = 2, essy = 3;

	std::cout << "Press 1 for Hard , Press 2 for Medium , Press 3 for easy" << std::endl;
	std::cin >> UserInput;

	if (UserInput = 1)
	{

		do
		{
			number = rand() % 1000 + 1;;
			std::cout << "Enter a number between 1 and 100" << std::endl;
			std::cin >> guess;
			if (number<guess)
				std::cout << "Too high try again" << std::endl;
			tries = 1;
		} while (number>guess);
		std::cout << "Too low try again" << std::endl;
		tries--;
		if (number == guess)
			std::cout << " You won  " << std::endl;
		std::cout << "You got the right number in " << tries << " tries";
		do
		{
			std::cout << "Would you like to play again?  Enter Yes";
			std::cin >> answer;

		} while (answer == " Yes");
	}


	if (UserInput = 2)
	{

		do
		{
			number = rand() % 500 + 1;;
			std::cout << "Enter a number between 1 and 100" << std::endl;
			std::cin >> die;
			if (number<die)
				std::cout << "Too high try again" << std::endl;
			tries2 = 3;
		} while (number>die);
		std::cout << "Too low try again" << std::endl;
		tries2--;
		if (number == die)
			std::cout << "You Won  " << std::endl;
		std::cout << "You got the right number in " << tries2 << " tries";
		do
		{
			std::cout << "Would you like to play again?  Enter Yes";
			std::cin >> answer;

		} while (answer == " Yes");
	}


	if (UserInput = 3)
	{

		do
		{
			number = rand() % 100 + 1;;
			std::cout << "Enter a number between 1 and 100" << std::endl;
			std::cin >> guess2;
			if (number<guess2)
				std::cout << "Too high try again" << std::endl;
			tries3 = 5;
		} while (number>guess2);
		std::cout << "Too low try again" << std::endl;
		tries3--;
		if (number == guess2)
			std::cout << " You Won  " << std::endl;
		std::cout << "You got the right number in " << tries3 << " tries";
		do
		{
			std::cout << "Would you like to play again?  Enter Yes";
			std::cin >> answer;

		} while (answer == " Yes");
	}


	system("pause");
	return 0;

}
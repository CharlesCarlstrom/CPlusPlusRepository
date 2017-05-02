#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


int main()
{
	int number;
	int chances = 0;
	bool correct;

	do{
		std::cout << "Pick a number between 1 and 100." << std::endl;
		std::cin >> number;
		srand(static_cast<unsigned int>(time(0)));
		int randomNumber = rand(); 
		int die = (randomNumber % 100) + 1;
		chances++;

		if (number == die)
		{
			std::cout << "You're correct! It was " << die << std::endl;
			correct = true;
		}
		else if (number > die)
		{
			std::cout << "Too high!" << std::endl;
		}
		else
		{
			std::cout << "Too low!" << std::endl;
		}

		std::cout << "You have used " << chances << " of 5 chances." << std::endl;
		std::cout << "The number was " << die << "!" << std::endl;
		std::cout << " " << std::endl;

	} while (chances != 5);




	system("pause");
	return 0;
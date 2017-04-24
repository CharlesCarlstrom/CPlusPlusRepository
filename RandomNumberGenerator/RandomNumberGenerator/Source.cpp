#include <iostream>
#include <cstdlib>
#include <ctime>

int main()

{
	srand(static_cast<unsigned int> (time(0)));
	int randomNumber = rand();
	int die = (randomNumber % 100) + 1;
	int number;
	int chances = 0;
  do{
	  chances++;
	  std::cout << "pick a number between 1 and 100" << std::endl;
	  std::cin >> number;
		
		if (number == die)
		{
		  std::cout << "congratulations the number " << die << " is correct" << std::endl;
	    }
		else if (number > die)
		{
			std::cout << "you chose too high" << std::endl;
		}
		else
		{
			std::cout << "You chose too low " << std::endl;
		}
		std::cout << "you have used " << chances << "of 5 chances" << std::endl;
	
}while (chances != 5 || number == die);
  std::cout << "Game over!" << chances << "of 5 chances" << std::endl;
  system("pause");
  return 0;
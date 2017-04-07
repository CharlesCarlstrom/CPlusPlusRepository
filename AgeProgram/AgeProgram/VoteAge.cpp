#include <iostream>

int main()
{
	int age;
	
	std::cout << "Enter your age.";
	std::cin >> age;

	if (age <= 10)
		std::cout << "No your 10 or younger." << std::endl;
	else if (age <= 12 && age < 17)
		std::cout << " you are less than 17 but older than 12";
	else if (age >= 18 && age <=1000)
		std::cout << "you can vote." << std::endl;

	system("pause");
	return 0;
}
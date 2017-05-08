#include <iostream>


int addition[] = { 23, 6, 47, 35, 2, 14 };
int n, result = 0;
int high = 0;
int odd = 0;
int even = 0;


int main() {

	//Avarage 
	int average = 0.0;
	for (n = 0; n < 6; ++n)
	{
		result = addition[n] + result;

		average = result / 6;

	}
	std::cout << "Average of Number " << average << std::endl;

	//Highest Number 
	for (n = 0; n < 6; ++n)
	{
		if (addition[n] >high)
			high = addition[n];
	}
	std::cout << " Highest Number  " << high << std::endl;


	//Odd Number 
	for (n = 0; n < 6; ++n)
	{
		if (even != addition[n] % 2)
			odd = addition[n];

		std::cout << " odd Number  " << odd << std::endl;
	}



	system("pause");
	return 0;


}

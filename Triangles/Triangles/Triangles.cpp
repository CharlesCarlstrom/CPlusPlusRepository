#include <iostream>
#include <string>
int main()
{
	int userInputTri;
	double sideA, sideB, sideC;
	std::string whatSide;
	std::cout << "What kind of triangle do you have? Enter 1 for right triangle, 2 for an isosceles, and 3 for a equilateral." << std::endl;
	std::cin >> userInputTri;

	if (userInputTri == 1)
	{
		std::cout << "what side is missing A, B or C?";
		std::cin >> whatSide;

		if (whatSide == "C")
		{
			std::cout << "is the number for side b";
			std::cin >> sideB;

			std::cout << "is the number for side A";
			std::cin >> sideA;

			sideC = sqrt((sideB*sideB) + (sideA * sideA));

			std::cout << sideC;
		}
		if (whatSide == "B")
		{
			std::cout << "is the number for side C";
			std::cin >> sideB;

			std::cout << "is the number for side A";
			std::cin >> sideA;

			sideB = sqrt((sideC*sideC) + (sideA * sideA));

			std::cout << sideB;
		}
		if (whatSide == "A")
		{
			std::cout << "is the number for side b";
			std::cin >> sideB;

			std::cout << "is the number for side C";
			std::cin >> sideC;

			sideA = sqrt((sideB*sideB) + (sideC * sideC));

			std::cout << sideA;
		}
	}

	if (userInputTri == 2)
	{
		std::cout << "what side is missing A, B or C?";
		std::cin >> whatSide;

		if (whatSide == "C")
		{
			std::cout << "is the number for side b";
			std::cin >> sideB;

			std::cout << "is the number for side A";
			std::cin >> sideA;

			sideC = sqrt((sideB*sideB) + (sideA * sideA));

			std::cout << sideC;
		}
		if (whatSide == "B")
		{
			std::cout << "is the number for side C";
			std::cin >> sideC;

			std::cout << "is the number for side A";
			std::cin >> sideA;

			sideB = sqrt((sideC*sideC) + (sideA * sideA));

			std::cout << sideB;
		}
		if (whatSide == "A")
		{
			std::cout << "is the number for side b";
			std::cin >> sideB;

			std::cout << "is the number for side C";
			std::cin >> sideC;

			sideA = sqrt((sideB*sideB) + (sideC * sideC));

			std::cout << sideA;
		}
	}
	if (userInputTri == 3)
	{
		std::cout << "what side is missing A, B or C?";
		std::cin >> whatSide;

		if (whatSide == "C")
		{
			std::cout << "is the number for side b";
			std::cin >> sideB;

			std::cout << "is the number for side A";
			std::cin >> sideA;

			sideC = sqrt((sideB*sideB) + (sideA * sideA));

			std::cout << sideC;
		}
		if (whatSide == "B")
		{
			std::cout << "is the number for side C";
			std::cin >> sideC;

			std::cout << "is the number for side A";
			std::cin >> sideA;

			sideB = sqrt((sideC*sideC) + (sideA * sideA));

			std::cout << sideB;
		}
		if (whatSide == "A")
		{
			std::cout << "is the number for side b";
			std::cin >> sideB;

			std::cout << "is the number for side C";
			std::cin >> sideC;

			sideA = sqrt((sideB*sideB) + (sideC * sideC));

			std::cout << sideA;
		}


	}
	system("pause");
	return 0;
}
	
	


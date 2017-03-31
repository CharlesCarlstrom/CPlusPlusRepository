//Delgados Tacos
//Charles Carlstrom
//Date: 3/30/17
#include <iostream>
#include <string>

int main()
{
	double tacoPrice = .99;
	double burritoPrice = 1.99;
	double fajitasPrice = 1.99;
	double quesadillaPrice = .99;
	double enchiladaPrice = 1.99;
	double tacoSaladPrice = 1.99;
	double chipsPrice = .99;
	double drinkPrice = 1.50;
	double total;

	const double  taxRate = 1.075;

	double tacosOrdered, buritosOrdered, drinksOrdered, fajitasOrdered, quesadillasOrdered, enchiladasOrdered, tacoSaladsOrdered, chipsOrdered;
	double tacoTotal, burritoTotal, fjitaTotal, quesadillaTotal, enchiladasTotal, tacoSaladTotal, chipsTotal, drinkTotal;

	std::cout << "How many tacos do you want?" << std::endl;
	std::cin >> tacosOrdered;
	
	std::cout << "how many buritos do you want?";
	std::cin >> buritosOrdered;

	std::cout << "how many fajitas do you want?";
	std::cin >> fajitasOrdered;

	std::cout << "how many quesadillas do you want?";
	std::cin >> quesadillasOrdered;

	std::cout << "how many enchiladas do you want?";
	std::cin >> enchiladasOrdered;

	std::cout << "how many taco salads do you want?";
	std::cin >> tacoSaladsOrdered;

	std::cout << "how many bags of chips and dip do you want?";
	std::cin >> chipsOrdered;

	std::cout << "how many drinks do you want?" << std::endl;
	std::cin >> drinksOrdered;

	
	total = tacosOrdered * tacoPrice + buritosOrdered * burritoPrice + fajitasPrice * fajitasOrdered + enchiladasOrdered * enchiladaPrice + tacoSaladsOrdered * tacoSaladPrice + chipsOrdered * chipsPrice + taxRate;
	std::cout << "Your total for all items is " << total;
	system("pause");
		return 0;

}
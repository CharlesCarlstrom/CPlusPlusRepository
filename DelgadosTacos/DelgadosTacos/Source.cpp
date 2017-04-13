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
	double totalWithoutTax;
	double totalitems;
	const double  taxRate = 1.75;
	double tacosOrdered, burritosOrdered, drinksOrdered, fajitasOrdered, quesadillasOrdered, enchiladasOrdered, tacoSaladsOrdered, chipsOrdered;
	double tacoTotal, burritoTotal, fjitaTotal, quesadillaTotal, enchiladasTotal, tacoSaladTotal, chipsTotal, drinkTotal;

	std::cout << "*** Tacos   - $ .99 ***" << std::endl;
	std::cout << "*** Burritos - $1.99 ***" << std::endl;
	std::cout << "*** Fajitas - $1.99 ***" << std::endl;
	std::cout << "* Enchilladas - $1.99 *" << std::endl;
	std::cout << "** TacoSalad - $1.99 **" << std::endl;
	std::cout << "* Quesadilla - $ .99  *" << std::endl;
	std::cout << "*** Chips  - $ .99  ***" << std::endl;
	std::cout << "*** Drinks  - $1.50 ***" << std::endl;

	std::cout << "Welcome to delgados tacos how can I help you today?" << std::endl;
	
	int tacos = 1, burritos = 2, fajitas = 3, quesadillas = 4, enchiladas = 5, tacoSalad = 6, chips = 7, drinks = 8;
	
	if (tacos)
	{
		std::cout << "How many tacos do you want?" << std::endl;
		std::cin >> tacosOrdered;
	}

	if (burritos)
	{
		std::cout << "how many buritos do you want?";
		std::cin >> burritosOrdered;
	}

	if (fajitas)
	{
		std::cout << "how many fajitas do you want?";
		std::cin >> fajitasOrdered;
	}

	if (quesadillas)
	{
	
		std::cout << "how many quesadillas do you want?";
		std::cin >> quesadillasOrdered;
	}
	
	if (enchiladas)
	{
		std::cout << "how many enchiladas do you want?";
		std::cin >> enchiladasOrdered;
	}

	if (tacoSalad)
	{
		std::cout << "how many taco salads do you want?";
		std::cin >> tacoSaladsOrdered;
	}
	
	if (chips)
	{
		std::cout << "how many bags of chips and dip do you want?";
		std::cin >> chipsOrdered;
	}
	
	if (drinks)
	{
		std::cout << "how many drinks do you want?" << std::endl;
		std::cin >> drinksOrdered;
	}

	totalitems = tacosOrdered + burritosOrdered + drinksOrdered + fajitasOrdered + quesadillasOrdered + enchiladasOrdered + tacoSaladsOrdered + chipsOrdered;
	totalWithoutTax = tacosOrdered * tacoPrice + burritosOrdered * burritoPrice + fajitasPrice * fajitasOrdered + enchiladasOrdered * enchiladaPrice + tacoSaladsOrdered * tacoSaladPrice + chipsOrdered * chipsPrice;
	total = tacosOrdered * tacoPrice + burritosOrdered * burritoPrice + fajitasPrice * fajitasOrdered + enchiladasOrdered * enchiladaPrice + tacoSaladsOrdered * tacoSaladPrice + chipsOrdered * chipsPrice + taxRate;
	
	std::cout << "You ordered " << totalitems << " items, that comes to a total of " << totalWithoutTax;
	std::cout << "Your total with tax is " << total ;
	system("pause");
		return 0;

}
#include <iostream>
using namespace std;


int main()
{
	int pizzaYes = 1, pizzaNo = 2, small = 1, medium = 2, large = 3;
	const float pizzalarge = 14.99, pizzamedium = 12.99, pizzasmall = 9.99;
	int pizzaNumOrdered ,orderInput;
	float pizzaTotal;

	
	cout << "Welcome to ______ Pizza";
	cout << "We have a wide range of pizzas to choose from,\n"
		"would you like to order a pizza? 1 for yes, 2 for no.";
	cin >> pizzaYes;




	if (pizzaYes == 1)
	{
		cout << "I am glad you would like a pizza, what size? 1 for small, 2 for medium, and 3 for large";
		cin >> orderInput;
		
		if (orderInput == 1)
			pizzaNumOrdered = pizzasmall; 
			cout << "Small pizza" <<pizzaNumOrdered << std::endl;
		


		 if (orderInput == 2)
			pizzaNumOrdered = pizzamedium; 
			cout << "Medium pizza" << pizzaNumOrdered << std::endl;

		if (orderInput == 3)
			pizzaNumOrdered = pizzalarge; 
			cout << "large pizza" << pizzaNumOrdered << std::endl;


	}
}
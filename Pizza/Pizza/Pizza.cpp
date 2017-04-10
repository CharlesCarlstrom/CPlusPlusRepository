#include <iostream>
#include<string>
using namespace std;
///Dipesh Thapa
///Charles Carlstrom

int main()
{
	int pizzaYes = 1, pizzaNo = 2, small = 1, medium = 2, large = 3;
	const float pizzalarge = 14.99, pizzamedium = 12.99, pizzasmall = 9.99;
	int pizzaNumOrdered, orderInput;
	float pizzaTotal;
	string topping;


	cout << "Welcome to ______ Pizza";
	cout << "We have a wide range of pizzas to choose from,\n"
		"would you like to order a pizza? 1 for yes, 2 for no.";
	cin >> pizzaYes;




	if (pizzaYes == 1)
	{
		cout << "I am glad you would like a pizza, what size? 1 for small, 2 for medium, and 3 for large";
		cin >> orderInput;

		if (orderInput == 1)
		{

			cout << "How many small pizza you want";
			std::cin >> pizzaNumOrdered;
			cout << "what toppings do you want: Pepperoni, sausage, or cheese?";
			cin >> topping;

			if (topping == "cheese" || topping == "Cheese")
			{
				pizzaTotal = pizzaNumOrdered * pizzasmall;
				cout << " Your price for chesse pizza is $" << pizzaTotal << std::endl;
				//do this statement

			}
			else if (topping == "pepperoni")
			{
				pizzaTotal = pizzaNumOrdered * pizzasmall;
				cout << " Your price for pepperoni pizza is $" << pizzaTotal << std::endl;
				//do this
			}
			else if (topping == "sausage")
			{
				pizzaTotal = pizzaNumOrdered * pizzasmall;
				cout << " Your price for sausage is $" << pizzaTotal << std::endl;
			}

		}


		else if (orderInput == 2)
		{

			cout << "How many Medium pizza you want";
			std::cin >> pizzaNumOrdered;
			cout << "what toppings do you want: Pepperoni, sausage, or cheese?";
			cin >> topping;
			if (topping == "cheese" || topping == "Cheese")
			{
				pizzaTotal = pizzaNumOrdered * pizzamedium;
				cout << " Your price for chesse pizza is $" << pizzaTotal << std::endl;
				//do this statement

			}
			else if (topping == "pepperoni")
			{
				pizzaTotal = pizzaNumOrdered * pizzamedium;
				cout << " Your price for pepperoni pizza is $" << pizzaTotal << std::endl;
				//do this
			}
			else if (topping == "sausage")
			{
				pizzaTotal = pizzaNumOrdered * pizzamedium;
				cout << " Your price for sausage is $" << pizzaTotal << std::endl;
			}
		}
		


		else if (orderInput == 3)
		{

			cout << "How many Large pizza you want";
			std::cin >> pizzaNumOrdered;
			cout << "what toppings do you want: Pepperoni, sausage, or cheese?";
			cin >> topping;
			if (topping == "cheese" || topping == "Cheese")
			{
				pizzaTotal = pizzaNumOrdered * pizzalarge;
				cout << " Your price for chesse pizza is $" << pizzaTotal << std::endl;
				//do this statement

			}
			else if (topping == "pepperoni")
			{
				pizzaTotal = pizzaNumOrdered *  pizzalarge;
				cout << " Your price for pepperoni pizza is $" << pizzaTotal << std::endl;
				//do this
			}
			else if (topping == "sausage")
			{
				pizzaTotal = pizzaNumOrdered *  pizzalarge;
				cout << " Your price for sausage is $" << pizzaTotal << std::endl;
			}

		}

	}
	else if (pizzaNo == 2)
	
		cout << "Sorry to hear that please leave.";
	

}


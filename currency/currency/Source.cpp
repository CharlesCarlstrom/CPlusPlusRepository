#include <iostream>
#include <String>

int main() {

	double  AmericanDollars, BritishPoundstotal, MexicanPesostotal, Japaneseyentotal;

	const double Britishpounds = .6318, Mexicanpeso = 12.8863, JapaneseYen = 82.34;

	std::cout << " How many US dollar you want to converts to Pounds , Pesos , Yen" << std::endl;
	std::cin >> AmericanDollars;

	BritishPoundstotal = AmericanDollars * Britishpounds;
	MexicanPesostotal = AmericanDollars * Mexicanpeso;
	Japaneseyentotal = AmericanDollars * JapaneseYen;

	std::cout << "Your total for Pound is " << BritishPoundstotal << std::endl;
	std::cout << "Your total for Pesos is " << MexicanPesostotal << std::endl;
	std::cout << "Your total for Yan is " << Japaneseyentotal << std::endl;


}

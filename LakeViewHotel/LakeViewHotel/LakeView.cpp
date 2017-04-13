#include <iostream>
#include <string>

int main()
{
	double phoneCharge, perMinutes = 0, totalAmount, perNightRate, totalNights, serviceCharge;
	int extraNight = 0;
	std::string anotherNight_Yes_No, servicesYes_No;

		std::cout << "how many nights did they stay? ";
		std::cin >> totalNights;

		std::cout << "Did they pay for services?";
		std::cin >> servicesYes_No;

		std::cout << "total time they spent on phone(in Minutes)?";
		std::cin >> perMinutes;

	do
	{
		std::cout << "Did they stay another night?";
		std::cin >> anotherNight_Yes_No;
		extraNight = extraNight + 100;

	} while (anotherNight_Yes_No != "yes");

	if (servicesYes_No == "yes")
	{
		perNightRate = totalNights * 100 + extraNight;
		serviceCharge = 35;
		phoneCharge = perMinutes * .25;
		totalAmount = perNightRate + serviceCharge + phoneCharge;
	}
	else
	{
		phoneCharge = perMinutes * .25;
		perNightRate = totalNights * 100 + extraNight;
		totalAmount = perNightRate + phoneCharge;
		serviceCharge = 0;
	}

	std::cout << "They have to pay $ " << perNightRate << "for the room";
	std::cout << "They have to pay $ " << serviceCharge << " for room services";
	std::cout << "They have to pay $ " << phoneCharge << " for the phone bill. ";
	std::cout << "their total bill is $ " << totalAmount << std::endl;

	system("pause");
	return 0;
}
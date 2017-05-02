#include <iostream>
#include <iomanip>

double getHoursWorked();
double getPayRate();
double calcGross();
double calcGross(double workHours, double thePayRate);

int main()
{

	double hoursWorked = 0;
	double payRate = 0;
	double grossPay = 0;


	hoursWorked = getHoursWorked();
	payRate = getPayRate();


	grossPay = calcGross(hoursWorked, payRate);


	std::cout << " Gross Pay: " << grossPay << std::endl;

	system("pause");
	return 0;
}

double getHoursWorked()
{
	double hoursOfWork;
	std::cout << "Please enter hours worked " << std::endl;
	std::cin >> hoursOfWork;

	return hoursOfWork;

}

double getPayRate()
{
	double rateOfPay;

	std::cout << " Enter pay rate $ " << std::endl;;
	std::cin >> rateOfPay;

	return rateOfPay;
}

double calcGross(double workHours, double thePayRate)
{
	double calculatedGross = 0.0;
	calculatedGross = workHours * thePayRate;
	return calculatedGross;

}
#include <iostream>
using namespace std;

int main()
{
double celsius8am, celsius12pm, celsius5pm, farhen8am, farhen12pm, farhen5pm;

std::cout << "What tempture is it celsius at 8am?" << std::endl;
std::cin >> celsius8am;

std::cout << "What tempture is it celsius at 12pm?" << std::endl;
std::cin >> celsius12pm;

std::cout << "What tempture is it celsius at 5pm" << std::endl;
std::cin >> celsius5pm;

farhen8am = celsius8am * 1.8 + 32;
farhen12pm = celsius12pm * 1.8 + 32;
farhen5pm = celsius5pm * 1.8 + 32;

cout << "The temperture at 8:00 AM in fahrenheit is " << farhen8am << endl;
cout << "The temperture at 12:00 PM in fahrenheit is " << farhen12pm << endl;
cout << "The temperture at 5:00 PM in fahrenheit is " << farhen8am << endl;

return 0;
}

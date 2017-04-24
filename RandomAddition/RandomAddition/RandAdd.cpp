#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRandomNumber();

int main()
{
	int num1 = 0;
	int num2 = 0;
	int correctAnswer = 0;
	int userAnswer = 0;

	srand(static_cast<int>(time(0)));

	for (int x = 1; x < 6; x += 1)
	{
		num1 = 1 + rand() % (10 - 1 + 1);
		num2 = 1 + rand() % (10 - 1 + 1);;
		correctAnswer = num1 + num2;

		cout << "what is the sum of " << num1
			<< " + " << num2 << "? ";
		cin >> userAnswer;

		if (userAnswer == correctAnswer)
			cout << "Correct!";
		else
			cout << "sorry, the correct answer is "
			<< correctAnswer << ".";
		cout << endl << endl;
	}
	system("pause");
	return 0;

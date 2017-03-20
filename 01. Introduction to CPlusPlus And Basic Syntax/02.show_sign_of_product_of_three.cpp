#include <iostream>

using namespace std;

bool CheckIfNegative(double numberToCheck);

int main()
{
	double number1, number2, number3, product;

	cout << "Please enter three numbers:" << endl;
	cout << "First number: " << endl;
	cin >> number1;
	cout << "Second number: " << endl;
	cin >> number2;
	cout << "Third number: " << endl;
	cin >> number3;


	if (CheckIfNegative(number1))
	{
		if (CheckIfNegative(number2) && CheckIfNegative(number3))
		{
			cout << "The sign is -" << endl;
		}
		else if (CheckIfNegative(number2) || CheckIfNegative(number3))
		{
			cout << "The sign is +" << endl;
		}
		else
		{
			cout << "The sign is -" << endl;
		}
	}
	else
	{
		if (CheckIfNegative(number2) && CheckIfNegative(number3))
		{
			cout << "The sign is +" << endl;
		}
		else if (CheckIfNegative(number2) || CheckIfNegative(number3))
		{
			cout << "The sign is -" << endl;
		}
		else
		{
			cout << "The sign is +" << endl;
		}
	}

	return 0;
}

bool CheckIfNegative(double numberToCheck)
{
	return (numberToCheck < 0);
}

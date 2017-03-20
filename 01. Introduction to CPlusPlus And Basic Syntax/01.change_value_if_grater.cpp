#include <iostream>

using namespace std;

int main()
{
	int val1, val2;
	cin >> val1 >> val2;

	cout << "First value before swap: " << val1 << endl;
	cout << "Second value before swap: " << val2 << endl;

	if (val1 > val2)
	{
		val1 += val2;
		val2 = val1 - val2;
		val1 -= val2;

		cout << "First value after swap: " << val1 << endl;
		cout << "Second value after swap: " << val2 << endl;
	}
	else
	{
		cout << "There is no change (swap)." << endl;
		cout << "First value: " << val1 << endl;
		cout << "Second value: " << val2 << endl;
	}

	return 0;
}

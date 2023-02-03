


#include "std_lib_facilities.h"


int main()
{

	int val1;
	int val2;
	cout << "please enter the first integer: ";
	cin >> val1;
	cout << "Please enter the second integer: ";
	cin >> val2;
	cout << val1 + val2 << " is the sum of " << val1 << " and " << val2 << "\n";
	cout << val1 - val2 << " is the difference(subtraction) of " << val1 << " and " << val2 << "\n";
	cout << val1 * val2 << " is the product of " << val1 << " and " << val2 << "\n";

	if (val1 < val2)
		cout << val1 << " is smaller than " << val2 << "\n";
	if (val1 > val2)
		cout << val1 << " is greater than " << val2;

}

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter A and B: ";
	int a, b;
	cin >> a >> b;

	cout << "A + B = " << a + b << "\n"
		 << "A - B = " << a - b << "\n"
		 << "A * B = " << a * b << "\n"
		 << "A / B = " << a / b << "\n";

	if (a > b)
		cout << "Max A: " << a << "\n";
	else
		cout << "Max B: " << b << "\n";

	if (a < b)
		cout << "Min A: " << a << "\n";
	else
		cout << "Min B: " << b << "\n";
}
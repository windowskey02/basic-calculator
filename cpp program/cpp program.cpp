#include <iostream>
using namespace std;
int main() {
	int x;
	int y;
	cout << "Enter a number (x): " << endl;
	cin >> x;
	cout << "Enter another number (y): " << endl;
	cin >> y;
	cout << "Results: " << endl;
	cout << "Addition: " << x + y << endl;
	cout << "Subtraction: " << x - y << endl;
	cout << "Multiplication: " << x * y << endl;
	cout << "Division (x / y): " << x / y << endl;
	cout << "Division (y / x): " << y / x << endl;
	return 0;
}
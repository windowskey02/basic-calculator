#include <iostream>
using namespace std;
int main() {
	int x;
	int y;
	cout << "Enter a number (x): " << endl;
	cin >> x;
	if (x == 0) {
		cout << "Don't do that." << endl;
		return 1;
	}
	else {
		cout << "Enter another number (y): " << endl;
	}
	cin >> y;
	if (y == 0) {
		cout << "Don't do that." << endl;
		return 1;
	}
	else {
		cout << "Results: " << endl;
		cout << "Addition: " << x + y << endl;
		cout << "Subtraction: " << x - y << endl;
		cout << "Multiplication: " << x * y << endl;
		cout << "Division (x / y): " << x / y << endl;
		cout << "Division (y / x): " << y / x << endl;
		return 0;
	}
}
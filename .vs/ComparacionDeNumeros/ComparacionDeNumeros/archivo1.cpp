#include <iostream>

using namespace std;

int main() {
	float num1, num2;
	cout << "Ingrese ambos valores: ";
	cin >> num1;
	cin >> num2;

	if (num1 > num2) {
		cout << num1 + num2;
		cout << "\n";
		cout << num1 - num2;
	}
	else {
		cout << num1 * num2;
		cout << "\n";
		cout << num1 / num2;
	}

	return 0;
}
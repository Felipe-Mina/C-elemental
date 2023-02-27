#include <iostream>

using namespace std;

int main() {

	int num = 8;

	while (num <= 500) {
		cout << num;
		cout << "-";
		num = num + 8;
	}

	return 0;
}
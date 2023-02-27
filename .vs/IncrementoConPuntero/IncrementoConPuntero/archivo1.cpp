#include <iostream>

using namespace std;

class Recorrer {
	int vec[5];
public:
	Recorrer();
	~Recorrer();
};

Recorrer::Recorrer() {
	int *p;
	p = &vec[0];
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un valor: ";
		cin >> *p;
		cout << "\n";
		p++;
	}
}

Recorrer::~Recorrer() {
	int* p;
	p = &vec[0];
	for (int i = 0; i < 5; i++) {
		cout << " - " << *p << " - ";
		p++;
	}
}

int main() {
	Recorrer rec1;
	rec1;
	return 0;
}
#include <iostream>

using namespace std;

class Person {
private: 
	char name[40];
	int age;
public:
	void initialize();
	void print();
	void ofLegalAge();
};

void Person::initialize() {
	cout << "Ingrese nombre: ";
	cin.getline(name, 40);
	cout << "Ingrese edad: ";
	cin >> age;
	cout << "\033[2J\033[1;1H";
};

void Person::print() {
	cout << "Nombre: ";
	cout << name;
	cout << "\n";
	cout << "Edad: ";
	cout << age;
	cout << "\n";
}

void Person::ofLegalAge() {
	if (age >= 18) {
		cout << "Es mayor de edad.";
	}
	else {
		cout << "No es mayor de edad.";
	};
	cin.get();
	cin.get();
};

int main() {
	Person person1;
	person1.initialize();
	person1.print();
	person1.ofLegalAge();
	return 0;
}

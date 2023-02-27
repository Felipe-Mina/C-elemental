#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Random {
	int vec[5];
public:
	Random();
	~Random();
};

Random::Random() {
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		vec[i] = rand() % 11;
	}
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			if (vec[i] > vec[i + 1]) {
				int aux = vec[i + 1];
				vec[i + 1] = vec[i];
				vec[i] = aux;
			}
		}
	}
	
	for (int i = 0; i < 5; i++) {
		cout << vec[i] << "\n";
	}
}

Random::~Random() {
	cout << "El menor valor es: " << vec[0] << "\n";
	cout << "El mayor valor es: " << vec[4];
}

int main() {
	Random rand1;
	return 0;
}
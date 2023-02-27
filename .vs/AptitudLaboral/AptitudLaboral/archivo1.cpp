#include<iostream>

using namespace std;

int main() {

	int numPreguntas, resCorrectas, porcentaje;
	cout << "Ingrese la cantidad de preguntas totales: ";
	cin >> numPreguntas;
	cout << "Ingrese la cantidad de respuestas correctas: ";
	cin >> resCorrectas;
	porcentaje = (resCorrectas * 100) / numPreguntas;

	if (porcentaje >= 90 && porcentaje <= 100) {
		cout << "Nivel maximo";
	}
	else if (porcentaje >= 75 && porcentaje < 90) {
		cout << "Nivel medio";
	}
	else if (porcentaje >= 50 && porcentaje < 75) {
		cout << "Nivel regular";
	}
	else if (porcentaje < 50) {
		cout << "Fuera de nivel";
	}
	else {
		cout << "Hubo un error calculando los datos ingresados";
	}

	return 0;

}
vv  #include <iostream>
#include <cstdlib> // Para utilizar las funciones de generación de números aleatorios
#include <ctime>   // Para obtener el tiempo actual como semilla

using namespace std;

// Funciones para realizar las operaciones
float multiplicarDosNumeros(float num1, float num2) {
	return num1 * num2;
}

float dividirDosNumeros(float num1, float num2) {
	if (num2 != 0) {
		return num1 / num2;
	} else {
		cout << "Error: No es posible dividir por cero." << endl;
		return 0;
	}
}

float multiplicarTresNumeros(float num1, float num2, float num3) {
	return num1 * num2 * num3;
}

float encontrarMayor(float num1, float num2, float num3) {
	float mayor = num1;
	
	if (num2 > mayor) {
		mayor = num2;
	}
	
	if (num3 > mayor) {
		mayor = num3;
	}
	
	return mayor;
}

int main() {
	// Semilla para la generación de números aleatorios
	srand(time(0));
	
	// Variables
	int opcion;
	float num1, num2, num3;
	int N;
	cout << "Alumno: Jessenia Justiniano Tapeosi" << endl;
	
	// Menú principal
	do {
		// Mostrar opciones del menú
	 	
		cout << "(1)...Multiplicacion con 2 numeros" << endl;
		cout << "(2)...Division con 2 numeros" << endl;
		cout << "(3)...Multiplicacion con 3 numeros" << endl;
		cout << "(4)...Mayor de 3 numeros" << endl;
		cout << "(5)...Generar N numeros aleatorios" << endl;
		cout << "(S)...Salir" << endl;
		
		// Solicitar la elección del usuario
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		// Realizar la tarea correspondiente según la opción seleccionada
		switch (opcion) {
		case 1:
			cout << "Ingrese el primer numero: ";
			cin >> num1;
			cout << "Ingrese el segundo numero: ";
			cin >> num2;
			cout << "El resultado de la multiplicacion es: " << multiplicarDosNumeros(num1, num2) << endl;
			break;
			
		case 2:
			cout << "Ingrese el numerador: ";
			cin >> num1;
			cout << "Ingrese el denominador: ";
			cin >> num2;
			cout << "El resultado de la division es: " << dividirDosNumeros(num1, num2) << endl;
			break;
			
		case 3:
			cout << "Ingrese el primer numero: ";
			cin >> num1;
			cout << "Ingrese el segundo numero: ";
			cin >> num2;
			cout << "Ingrese el tercer numero: ";
			cin >> num3;
			cout << "El resultado de la multiplicacion es: " << multiplicarTresNumeros(num1, num2, num3) << endl;
			break;
			
		case 4:
			cout << "Ingrese el primer numero: ";
			cin >> num1;
			cout << "Ingrese el segundo numero: ";
			cin >> num2;
			cout << "Ingrese el tercer numero: ";
			cin >> num3;
			cout << "El mayor de los tres numeros es: " << encontrarMayor(num1, num2, num3) << endl;
			break;
			
		case 5:
			cout << "Ingrese la cantidad de numeros aleatorios (N): ";
			cin >> N;
			cout << "Números aleatorios entre 0 y 99:" << endl;
			for (int i = 0; i < N; ++i) {
				cout << rand() % 100 << " "; // Genera un número aleatorio entre 0 y 99
			}
			cout << endl;
			break;
			
		case 'S':
		case 's':
			cout << "Saliendo del programa. ¡Hasta luego!" << endl;
			break;
			
		default:
			cout << "Opcion no valida. Intente nuevamente." << endl;
		}
		
	} while (opcion != 'S' && opcion != 's');
	return 0;
}

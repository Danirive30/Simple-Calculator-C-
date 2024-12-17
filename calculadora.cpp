#include <iostream>
#include <stdlib.h>
#include <math.h>
// Aquí incluimos las librerías necesarias

using namespace std;
// Aquí incluimos el namespace standard

int main()
{
	int num1 = 0;
	int num2 = 0;
	int opc = 0;

	cout << "    OPCIONES" << endl;
	cout << "1) Sumar" << endl;
	cout << "2) Restar" << endl;
	cout << "3) Multiplicar" << endl;
	cout << "4) Dividir" << endl;
	cout << "5) Potencia" << endl;
	cout << "6) Menu" << endl;
	cout << "7) Borrar Pantalla" << endl;
	cout << "0) Salir" << endl; // Opción para salir del programa
	cout << "" << endl;

	cout << "Ingrese numero de opcion: ";
	cin >> opc;

	while (opc != 0) // Ahora el ciclo se ejecuta hasta que el usuario ingrese 0 para salir
	{
		switch (opc)
		{
		case 1:
			cout << "\nIntroduzca el primer numero: ";
			cin >> num1;
			cout << "\nIntroduzca el segundo numero: ";
			cin >> num2;
			cout << "La suma es: " << num1 + num2 << endl;
			break;

		case 2:
			cout << "\nIntroduzca el primer numero: ";
			cin >> num1;
			cout << "\nIntroduzca el segundo numero: ";
			cin >> num2;
			cout << "La resta es: " << num1 - num2 << endl;
			break;

		case 3:
			cout << "\nIntroduzca el primer numero: ";
			cin >> num1;
			cout << "\nIntroduzca el segundo numero: ";
			cin >> num2;
			cout << "La multiplicacion es: " << num1 * num2 << endl;
			break;

		case 4:
			cout << "\nIntroduzca el primer numero: ";
			cin >> num1;
			cout << "\nIntroduzca el segundo numero: ";
			cin >> num2;

			if (num2 == 0) // Verificación de división por cero
			{
				cout << "Error: No se puede dividir entre cero." << endl;
			}
			else
			{
				cout << "La division es: " << static_cast<double>(num1) / num2 << endl;
			}
			break;

		case 5:
			cout << "\nIntroduzca la base: ";
			cin >> num1;
			cout << "\nIntroduzca el exponente: ";
			cin >> num2;
			cout << "La potencia es: " << pow(num1, num2) << endl;
			break;

		case 6:
			cout << "    OPCIONES" << endl;
			cout << "1) Sumar" << endl;
			cout << "2) Restar" << endl;
			cout << "3) Multiplicar" << endl;
			cout << "4) Dividir" << endl;
			cout << "5) Potencia" << endl;
			cout << "6) Menu" << endl;
			cout << "7) Borrar Pantalla" << endl;
			cout << "0) Salir" << endl;
			cout << "" << endl;
			break;

		case 7:
			system("cls");						// Borra la pantalla
			cout << "Pantalla borrada" << endl; // Mensaje adicional
			cout << "    OPCIONES" << endl;
			cout << "1) Sumar" << endl;
			cout << "2) Restar" << endl;
			cout << "3) Multiplicar" << endl;
			cout << "4) Dividir" << endl;
			cout << "5) Potencia" << endl;
			cout << "6) Menu" << endl;
			cout << "7) Borrar Pantalla" << endl;
			cout << "0) Salir" << endl;
			cout << "" << endl;
			break;

		default:
			cout << "La opcion \"" << opc << "\" no es valida." << endl;
			break;
		}

		cout << "Ingrese numero de opcion: ";
		cin >> opc;
	}

	cout << "Gracias por usar el programa. ¡Hasta luego!" << endl;
	return 0;
}

#include "Sistema.h"
#include <iostream>
#include <fstream>

using namespace std;

void Sistema::agregarDirectorio(char* nombreDirectorioRaiz)
{
	cout << "***  AGREGAR DIRECTORIO ***\n\n";

	ofstream archivoDirectorios(nombreDirectorioRaiz, ios::app);

	if (!archivoDirectorios)
	{
		cout << "Error al intentar abrir el archivo\n";
		return;
	}

	cout << "Indica la cantidad de directorios a agregar:  ";
	int cantidadDirectorios;
	cin >> cantidadDirectorios;
	char nombreDirectorio[20];

	for (int i = 0; i < cantidadDirectorios; i++)
	{
		cout << "Directorio " << (i + 1) << ": ";

		cout << "Ingrese nombre de alumno: ";
		cin >> nombreDirectorio;


		archivoDirectorios << nombreDirectorio << '\n';

		cout << "Directorio agregado!\n";
	}

	archivoDirectorios.close();
}


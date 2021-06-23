#pragma once
#ifndef SISTEMA_H
#define SISTEMA_H

class Sistema 
{
public:
	static void agregarDirectorio(char*);
	static void agregarArchivos(char*);
	static void imprimirSistemaArchivos();
	static int obtenerCantidadArchivos(char*);
	static bool editarDirectorioArchivo(char*,char*);

	static int obtenerCantidadSub();
};
#endif // !SISTEMA_H

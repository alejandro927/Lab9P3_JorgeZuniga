#ifndef TABLA_H
#define TABLA_H
#include <iostream>
#include <string>
#include <vector>
#include "Columna.h"
using namespace std;

class Tabla {
	
	public:
		Tabla();
		~Tabla();
		void agregarDatos(string,string,int,float,float,float);
		void mostrarDatos();
		void modificar();
		void eliminar();
		void imprimirTabla();
				
	private:
		Columna<string>* nombres;
		Columna<string>* apellidos;
		Columna<int>* edades;
		Columna<float>* notasExamenP;
		Columna<float>* notasAcumulativo;
		Columna<float>* notasExamenF;
		
		
};

#endif

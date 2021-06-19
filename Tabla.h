#ifndef TABLA_H
#define TABLA_H
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Columna.h"
#include <iostream>
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
		void min();
		void max();
		
		string getNombreMaximo();
		string getApellidoMaximo();
		int getEdadMaximo();
		float getNotaEPMaximo();
		float getNotaEFMaximo();
		float getNotaAcumMaximo();
		
		string getNombreMin();
		string getApellidoMin();
		int getEdadMin();
		float getNotaEPMin();
		float getNotaEFMin();
		float getNotaAcumMin();
				
	private:
		Columna<string>* nombres;
		Columna<string>* apellidos;
		Columna<int>* edades;
		Columna<float>* notasExamenP;
		Columna<float>* notasAcumulativo;
		Columna<float>* notasExamenF;
		
		
};

#endif

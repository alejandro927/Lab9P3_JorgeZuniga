#ifndef TABLA_H
#define TABLA_H
#include <iostream>
#include <vector>
#include "Columna.h">
using namespace std;



class Tabla {
	
	public:
		void agregarDatos(string,string,int,float,float,float);
		void mostrarDatos();
		
		string getNombre();
		void setNombre(int,string);
		
		string getApellido();
		void setApellido(int,string);
		
		int getEdad();
		void setEdad(int,int);
		
		
		
		
		
	private:
		Columna<string>nombres;
		Columna<string>apellidos;
		Columna<int>edades;
		template <class T>
		Columna<T>notasExamenP;
		Columna<T>notasAcumulativo;
		Columna<T>notasExamenF;

};

#endif
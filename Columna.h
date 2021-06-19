#ifndef COLUMNA_H
#define COLUMNA_H
#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Columna {

	public:
		Columna<T>();
		void addVector(T);
		
		void imprimirVector();
		int tamano();
		void modif(int,T);
		void eliminar(int);
		
		Columna<T>* sumar( Columna<T>* );
		T min();
		T max();
		
	private:
		vector<T> datos;


};

#endif

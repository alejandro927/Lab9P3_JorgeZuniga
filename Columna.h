#ifndef COLUMNA_H
#define COLUMNA_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <class T>
class Columna {

	public:
		Columna<T>();
		void addVector(T);
		/*int tamano();
		void modif();
		*/
		Columna<T>* sumar( Columna<T>* );
		T min();
		T max();

	private:
		vector<T> datos;


};

#endif
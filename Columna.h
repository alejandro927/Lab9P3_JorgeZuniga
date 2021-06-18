#ifndef COLUMNA_H
#define COLUMNA_H
#include <iostream>
#include <vector>
using namespace std;

template <class T> 
class Columna
{
	public:
		Columna<T> sumar(Columna<T>);
		T min();
		T max();
		
	protected:
		
		vector<T> datos;
};

#endif
#include "Columna.h"

template <class T>
Columna<T>::Columna() 
{

}

template <class T>
void Columna<T>::addVector(T dato) {
	datos.push_back(dato);
}


template <class T>
int Columna<T>::tamano(){
	return datos.size();
}


template <class T>
void Columna<T>::modif(int posicion, T cambio){
	for(int i=0;i<datos.size();i++){
		if(posicion == i){
			datos[i] = cambio;
		}
	}
}

template <class T>
void Columna<T>::imprimirVector(){
	for(int i=0;i<datos.size();i++){
		cout<<i<<") " << datos[i]<<endl;
	}
}

template <class T>
void Columna<T>::eliminar(int posicion){
	for(int i=0;i<datos.size();i++){
		if(posicion == i){
			//pelis.erase(begin(pelis) + posicion);//este fue usado exactamente en el examen1 y no funciona aqui :v
			datos.erase(begin(datos) + posicion);
		}
	}
}

template <class T>
Columna<T>* Columna<T>::sumar(Columna<T>* dato) {
	return dato;
}

template <class T>
T Columna<T>::min() {

}

template <class T>
T Columna<T>::max() {

}

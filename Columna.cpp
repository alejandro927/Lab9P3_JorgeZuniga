#include "Columna.h"

template <class T>
Columna<T>::Columna() {

}

template <class T>
void Columna<T>::addVector(T dato) {
	datos.push_back(dato);
}

template <class T>
int Columna<T>::tamano() {
	return datos.size();
}

template <class T>
vector<T> Columna<T>::getDatos() {
	return datos;
}

template <class T>
T Columna<T>::getDato(int i){
    if ((i>=0) && (i<datos.size())){
        return datos[i];
    }
}

template <class T>
void Columna<T>::modif(int posicion, T cambio) {
	for(int i=0; i<datos.size(); i++) {
		if(posicion == i) {
			datos[i] = cambio;
		}
	}
}

template <class T>
void Columna<T>::imprimirVectorNombre() {
	for(int i=0; i<datos.size(); i++) {
		cout<<i<<") Nombre:" << datos[i]<<endl;
	}
}

template <class T>
void Columna<T>::imprimirVectorApellido() {
	for(int i=0; i<datos.size(); i++) {
		cout<<i<<") Apellido:" << datos[i]<<endl;
	}
}


template <class T>
void Columna<T>::imprimirVectorEdad() {
	for(int i=0; i<datos.size(); i++) {
		cout<<i<<") Edad:" << datos[i]<<endl;
	}
}

template <class T>
void Columna<T>::imprimirVectorNotaEP() {
	for(int i=0; i<datos.size(); i++) {
		cout<<i<<") Nota Examen parcial:" << datos[i]<<endl;
	}
}


template <class T>
void Columna<T>::imprimirVectorNotaAcum() {
	for(int i=0; i<datos.size(); i++) {
		cout<<i<<") Nota acuumulativo:" << datos[i]<<endl;
	}
}


template <class T>
void Columna<T>::imprimirVectorNotaEF() {
	for(int i=0; i<datos.size(); i++) {
		cout<<i<<") Nota Examen Final:" << datos[i]<<endl;
	}
}

template <class T>
void Columna<T>::eliminar(int posicion) {
	//datos.erase(begin(datos)+posicion);
}

template <class T>
Columna<T>* Columna<T>::sumar(Columna<T>* centinela){
    Columna<T>* columna = new Columna <T>;
    for (int i = 0 ; i < centinela->datos.size();i++){
        columna->addVector(datos[i] + centinela->getDatos()[i]);
    }
    return columna;
    delete columna;
}

template <class T>
T Columna<T>::min() {
    T minimo = datos[0];
    //burbuja(casi)
    for(int i = 0; i < datos.size(); i++) {
        if(datos[i] < minimo){
			minimo = datos[i];
		}
    }
    return minimo;
}

template <class T>
T Columna<T>::max() {

    T maximo = datos[0];
    //burbuja(casi)
    for(int i = 0; i < datos.size(); i++) {
        if(datos[i] > maximo) {
			maximo = datos[i];
		}
    }
    return maximo;
}


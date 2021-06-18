#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu() {
	int opcion=0;
	cout<<"Menu"<<endl;
	cout<<"1) Agregar Registro"<<endl;
	cout<<"2) Modificar Registro"<<endl;
	cout<<"3) Eliminar Registro"<<endl;
	cout<<"4) Imprimir Tabla"<<endl;
	cout<<"5) Valor Maximo de una columna"<<endl;
	cout<<"6) Valor Minimo de una columna"<<endl;
	cout<<"7) Mostrar Datos"<<endl;
	cout<<"8) Salida"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	return opcion; 
}

int main(int argc, char** argv) {
	int opcion=0;
	while(opcion != 8 ){
		opcion = menu();
		switch(opcion){
			case 1:{
				
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				
				break;
			}
			case 5:{
				
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				
				break;
			}
			case 8:{
				cout<<"Gracias por usar el programa!!!\nBuen dia!!!";
				break;
			}
			
			
		}
		
	}
	
	return 0;
}
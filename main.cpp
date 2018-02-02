#include <iostream>
using namespace std;

//Primer Problema
void Primero();
//Segundo Problema
void segundo();
//Tercer Problema
void Tercero();
//

//

//

int main(){
	int opcion =1;	
	while(opcion!=4){
		cout<< "------MENU------"<<endl;
		cout<< "Ingrese la opcion a Realizar"<<endl;
		cout<< "1. Primer Ejercio"<<endl;
		cout<< "2. Segundo Ejercicio "<<endl;
		cout<< "3. Tercer Ejercicio"<<endl;
		cout<< "4. Salir del Programa";
		cin>>opcion;	
		switch(opcion){
			case 1:
				Primero();
				   
			break;
			case 2:


			break;
			case 3:


			break;
			case 4:


			break;
		}
	}

	return 0;
}

//El primer ejercicio
void Primero(){
	int opcion=0;
	while(opcion!=4){
		cout<<"1. Calcular Triangular por Respuesta de Usuario"<<endl;
		cout<<"2. Calcular Triangular por numero aleatorio"<<endl;
		cout<<"3. Calcular Mayor Triangular"<<endl; 
		cout<<"4. Regresar"<<endl;
		cin>>opcion;
	}
}


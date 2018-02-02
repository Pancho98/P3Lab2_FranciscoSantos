#include<cstdlib>
#include<math.h>
#include <iostream>
using namespace std;

//Primer Problema
void Primero();
//Segundo Problema
void Segundo();
//Tercer Problema
void Tercero();
//

//

//

int main(){
	int opcion =1;	
	while(opcion!=4){
		cout<< "----------MENU----------"<<endl;
		cout<< "Ingrese la opcion a Realizar"<<endl;
		cout<< "1. Primer Ejercio"<<endl;
		cout<< "2. Segundo Ejercicio "<<endl;
		cout<< "3. Tercer Ejercicio"<<endl;
		cout<< "4. Salir del Programa"<<endl;
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
		
		switch(opcion){
			case 1:

				   
	        break;
			case 2:


			break;
			case 3:


			break;
		}
	}
}

void Segundo(){
	int lado_a,lado_b,lado_c;
	cout<<"Ingrese el lado a: "<<endl;
	cin>>lado_a;
	cout<<"Ingrese el lado b: "<<endl;
	cin>>lado_b;
	cout<<"Ingrese el lado c: "<<endl;
	cin>>lado_c;
	
	
}

void Tercero(){
	int secuencia;
	cout<<"Ingrese el numero que desee que llegue la secuencia catalan: "<<endl;
	cin>>secuencia;
}

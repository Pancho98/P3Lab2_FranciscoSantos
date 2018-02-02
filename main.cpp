#include<cstdlib>
#include<math.h>
#include <iostream>
using namespace std;

#define PI 3.14159265

//Primer Problema
void Primero();
//Segundo Problema
void Segundo();
//Tercer Problema
void Tercero();
//calculo del previo 
void previo(int);
//factorial recursivo
int factorial(int);

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
			case 1:{
				Primero();
		    }
			break;
			case 2:{
				Segundo();
			}
			break;
			case 3:{
				Tercero();
		    }
			break;
			case 4:{
					   
				   }


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
			case 1:{
				int acum=0;
				int numero;
				cout<<"Ingrese el numero que desea calcular: "<<endl;
				cin>>numero;
				for(int i=0;i<numero;i++){
					acum+=i;
					if(acum==numero){
						cout<<"El numero "<<numero<<" es Triangular"<<endl;
						break;
					}
				}
				if(acum!=numero){
					cout<<"El numero "<<numero<<" no es Triangular"<<endl;
				}
			}
				   
	        break;
			case 2:{
				int random=0;
				random=rand()% 100+1;
				cout<<"El Random es: "<<random<<endl;
				int acum=0;
				for(int i=0;i<random;i++){
					acum+=i;
					if(acum==random){
						cout<<"El numero es Triangular";
						break;
					}
				}
				if(acum!=random){
					cout<<"El numero no es Triangular "<<endl;
				}
			}
			break;
			case 3:{
				int calcular;
				cout<<"Ingrese un numero: "<<endl;
				cin>>calcular;
				previo(calcular);
			}
			break;
		}
	}
}

void Segundo(){
	double lado_a,lado_b,lado_c;
	cout<<"Ingrese el lado a: "<<endl;
	cin>>lado_a;
	cout<<"Ingrese el lado b: "<<endl;
	cin>>lado_b;
	cout<<"Ingrese el lado c: "<<endl;
	cin>>lado_c;
	
	double s = (lado_a+lado_b+lado_c)/2;
	double area=sqrt(s*((s-lado_a)*(s-lado_b)*(s-lado_c)));
	double angulo_a= acos((pow(lado_b,2.0)+(pow(lado_c,2.0)-pow(lado_a,2.0)))/(2.0*lado_b*lado_c))*180/PI;
	double angulo_b= acos((pow(lado_a,2.0)+(pow(lado_c,2.0)-pow(lado_b,2.0)))/(2.0*lado_a*lado_c))*180/PI;
	double angulo_c=180-angulo_a-angulo_b;

	cout<<"El angulo a= "<<angulo_a<<endl;
	cout<<"El angulo b= "<<angulo_b<<endl;
	cout<<"El angulo c= "<<180-angulo_a-angulo_b<<endl;
	cout<<"El area de el Trangulo es: "<<area<<endl;
	if(angulo_a==90 || angulo_b==90 || angulo_c==90){
		cout<<"EL triangulo es Rectangulo"<<endl;
	}else{
		cout<<"El triangulo no es Rectangulo"<<endl;
	}
}

void Tercero(){
	int numero;
	cout<<"Ingrese el numero que desee que llegue la secuencia catalan: "<<endl;
	cin>>numero;
	int secuencia;
	for(int i=0;i<=numero;i++){
		if(i==0){
			cout<<"1 ";
		}else
			secuencia=(factorial(2*i))/(factorial(i+1)*(factorial(i)));
			cout<<secuencia<<" ";
		}
	}
	cout<<""<<endl;
}

void previo(int numero){
	int acum=0;
	for(int i=0;i<numero;i++){
		acum+=i;
		if(acum==numero){
			cout<<"El numero "<<numero<<" es un Triangular"<<endl;
			break;
		}
	}
	if(acum!=numero){
		previo(numero-1);
	}
}

int factorial(int numero){
	if(numero==0){
		return 1;
	}else{
		return numero*factorial(numero-1);
	}

}

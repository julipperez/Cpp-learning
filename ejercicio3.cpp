#include <iostream>
using namespace std;

int divisionEntera(int , int , int ); //la función recibe directamente la variable original, no una copia

int main(int argc, char *argv[]) {
	
		int valor1;
		int valor2;
	
		cout<<"ingrese el valor 1: ";
		cin>>valor1;
		
		cout<<"ingrese el valor 2: ";
		cin>>valor2;
		
		int resultado;
		
		resultado= divisionEntera(valor1,valor2,resultado); //no pasás direcciones de memoria, sino las variables mismas
		
		cout<<""<<resultado;
		
	return 0;
}
int divisionEntera(int &a, int &b, int &res){
 if(b==0){
	 cout<<"no se puede la division por 0, entonces salida por defecto:\n";
	 res=(-1);
	 return res;
 }else{
	 res=0;
	 cout<<"como el divisor no es 0, salida por defecto: ";
	 return res;
	}
}


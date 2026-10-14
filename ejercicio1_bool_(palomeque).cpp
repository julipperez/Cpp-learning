#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	bool mayor; //aca se va a guardar la condicion
		cout<<"ingrese el numero 1:\n";
		cin>>numero1;
		cout<<"ingrese el numero 2:\n";
		cin>>numero2;
	
	if(numero1>numero2){
		mayor=true; 
	}else{
		mayor=false;
	}
	cout<<boolalpha; //muestra true o false
	cout << "Es " << mayor << " que " << numero1 << " es mayor que " << numero2;
	
	return 0;
}


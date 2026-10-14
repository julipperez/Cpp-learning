#include <iostream>
using namespace std;

inline cuadradodenumero(double x){
	
	return x*x ; 
}

int main(int argc, char *argv[]) {
	double num;
	
	cout<<"ingrese el numero: ";
	cin>>num;
	
	cout<<"el cuadrado de "<<num<<" es:"<<cuadradodenumero(num);
		
	return 0;
}


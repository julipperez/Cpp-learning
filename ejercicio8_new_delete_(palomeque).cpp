#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int tamano;
	
	cout<<"ingrese el tamano del arreglo: ";
	cin>>tamano;
	
	int *array=new int[tamano]; //con new basicamente es guardar memoria dniamica:
	
	
	for(int i=0; i<tamano; i++){
		cout<<"ingrese el valor "<<i<<"del arreglo"<<endl;
		cin>>array[i];
	}
	//mostrar valores
	for(int i=0; i<tamano; i++){
		cout<<"posicion "<<i<<" tiene valor"<<array[i]<<endl;
	}
	
	delete[] array;
	array=nullptr;
	return 0;
}


#include <iostream>
using namespace std;

int resta(int a,int b){
	return a-b;
}

double resta(double a,double b){
	return a-b;
}

int main(int argc, char *argv[]) {
	cout<<"la resta entre enteros da: "<<resta(2,3)<<endl;
	cout<<"la resta entre float da: "<<resta(4.5,2.2)<<endl;
	return 0;
}


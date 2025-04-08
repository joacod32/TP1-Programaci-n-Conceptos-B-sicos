#include <iostream>
using namespace std;

int main(){
	int nota1;
	int nota2;
	int nota3;
	
	cout<<"ingrese la nota 1:";
	cin>>nota1;
	cout<<"ingrese la nota2:";
	cin>>nota2;
	cout<<"ingrese la nota3:";
	cin>>nota3;
	
	int promedio;
	promedio= (nota1+nota2+nota3)/3;
	
	if (promedio>=7){
		cout<<"promocionado";
	} else if(promedio >=4) {
		cout<<"regular";
	} else {
		cout<<"regular";
	}
	
	

	
}

	

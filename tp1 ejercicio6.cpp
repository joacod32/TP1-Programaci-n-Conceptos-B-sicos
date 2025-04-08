#include <iostream>
using namespace std;

int main() {
	int entrada, precio;
	float descuento=0;
	precio= 20000;
    cout<< "precio de la entrada 20,000"<<endl;
    cout<<"ingresa la cantidad de entradas que quiera comprar (maximo 4 por persona)"<<endl;
    cin>>entrada;
    if(entrada>4)
    {
    	cout<<"ERROR X"<<endl;
    	return 0;
	}

    if(entrada==1)
    {
    descuento = 0;
	}
	else if(entrada==2)
	{
		descuento = 0.15;
	}
	else if(entrada==3)
	{
	descuento = 0.20;
	}
	else if(entrada==4)
	{
    descuento = 0.25;
	}
	int preciocasitotal=entrada*precio;
	float total=preciocasitotal - (preciocasitotal * descuento);
    cout<<"RESUMEN DE COMPRA"<<endl;
    cout<<"entradas compradas "<<entrada<<endl;
    cout<<"precio sin descuento "<<preciocasitotal<<endl;
    cout<<"descuento aplicado "<<descuento*100<<"% "<<endl;
    cout<<"precio final con descuento "<<total<<endl;
    return 0;
}

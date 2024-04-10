#include <iostream>
#include <stdlib.h>
using namespace std;

int numero;

int main()
{
	cout << "Entre com o numero:";
	cin >> numero;
	if(numero < 0){
		cout << "Negativo";
	}
	if(numero > 0 ){
		cout << "Positivo";
	}
	if(numero == 0){
		cout << "Zero";
	}
    return 0;
}
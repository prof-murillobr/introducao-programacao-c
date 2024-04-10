#include <iostream>
#include <stdlib.h>
using namespace std;

int numero;

int main()
{
	cout << "Entreo com o numero:";
	cin >> numero;
	if(numero % 2 == 0){
		cout << "E par";
	}
	else{
		cout << "E impar";
	}
    return 0;
}
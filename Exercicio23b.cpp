#include <iostream>
#include <stdlib.h>
using namespace std;

int primeiro,segundo,terceiro;

int main()
{
	cout << "Entre com o primeiro:";
	cin >> primeiro;
	cout << "Entre com o segundo:";
	cin >> segundo;
	cout << "Entre com o terceiro:";
	cin >> terceiro;
	if(primeiro > segundo && primeiro > terceiro){
		cout << "Primeiro e maior";
	}	
	if(segundo > primeiro && segundo > terceiro){
		cout << "Segundo e maior";
	}		
	if(terceiro > primeiro && terceiro > segundo){
		cout << "Terceiro e maior";
	}		
    return 0;
}
#include <iostream>
#include <stdlib.h>
using namespace std;

int soma,primeiro,segundo,terceiro;

int main()
{
	cout << "Entre com o primeiro:";
	cin >> primeiro;
	cout << "Entre com o segundo:";
	cin >> segundo;
	cout << "Entre com o terceiro:";
	cin >> terceiro;	
	if(primeiro > segundo && primeiro > terceiro && segundo > terceiro){
		soma = primeiro + segundo;
	}
	if(primeiro > segundo && primeiro > terceiro && terceiro > segundo){
		soma = primeiro + terceiro;
	}
	if(segundo > primeiro && segundo > terceiro && primeiro > terceiro){
		soma = segundo + primeiro;
	}
	if(segundo > primeiro && segundo > terceiro && terceiro > primeiro){
		soma = segundo + terceiro;
	}
	if(terceiro > primeiro && terceiro > segundo && primeiro > segundo){
		soma = terceiro + primeiro;
	}
	if(terceiro > primeiro && terceiro > segundo && segundo > primeiro){
		soma = terceiro + segundo;
	}
	cout << "A soma e:" << soma;		
    return 0;
}
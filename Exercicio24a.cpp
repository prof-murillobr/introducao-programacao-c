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
	if(primeiro > segundo && primeiro > terceiro){
		if(segundo > terceiro){
			soma = primeiro + segundo;
		}
		else{
			soma = primeiro + terceiro;
		}
	}
	if(segundo > primeiro && segundo > terceiro){
		if(primeiro > terceiro){
			soma = segundo + primeiro;
		}
		else{
			soma = segundo + terceiro;
		}
	}
	if(terceiro > primeiro && terceiro > segundo){
		if(primeiro > segundo){
			soma = terceiro + primeiro;
		}
		else{
			soma = terceiro + segundo;
		}
	}
	cout << "A soma e:" << soma;		
    return 0;
}
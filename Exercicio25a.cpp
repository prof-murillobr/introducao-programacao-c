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
		cout << terceiro;
		cout << "\n";
		cout << segundo;
		cout << "\n";
		cout << primeiro;
	}
	if(primeiro > segundo && primeiro > terceiro && terceiro > segundo){
		cout << segundo;
		cout << "\n";
		cout << terceiro;
		cout << "\n";
		cout << primeiro;
	}
	if(segundo > primeiro && segundo > terceiro && primeiro > terceiro){
		cout << terceiro;
		cout << "\n";
		cout << primeiro;
		cout << "\n";
		cout << segundo;
	}
	if(segundo > primeiro && segundo > terceiro && terceiro > primeiro){
		cout << primeiro;
		cout << "\n";
		cout << terceiro;
		cout << "\n";
		cout << segundo;
	}
	if(terceiro > primeiro && terceiro > segundo && primeiro > segundo){
		cout << segundo;
		cout << "\n";
		cout << primeiro;
		cout << "\n";
		cout << terceiro;
	}
	if(terceiro > primeiro && terceiro > segundo && segundo > primeiro){
		cout << primeiro;
		cout << "\n";
		cout << segundo;
		cout << "\n";
		cout << terceiro;
	}		
    return 0;
}
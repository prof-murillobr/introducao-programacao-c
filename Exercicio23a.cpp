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
	if(primeiro > segundo){
		if(primeiro > terceiro){
			cout << "Primeiro e maior";
		}
		else{
			cout << "Terceiro e maior";
		}
	}
	else{
		if(segundo > terceiro){
			cout << "Segundo e maior";
		}
		else{
			cout << "Terceiro e maior";
		}
	}	
    return 0;
}
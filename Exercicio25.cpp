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
		if(segundo > terceiro){
			cout << "\n" <<primeiro;
			cout << "\n" <<segundo;
			cout << "\n" <<terceiro;
		}
		else{
			cout << "\n" <<primeiro;
			cout << "\n" <<terceiro;
			cout << "\n" <<segundo;
		}
	}
	if(segundo > primeiro && segundo > terceiro){
		if(primeiro > terceiro){
			cout << "\n" <<segundo;
			cout << "\n" <<primeiro;
			cout << "\n" <<terceiro;
		}
		else{
			cout << "\n" <<segundo;
			cout << "\n" <<terceiro;
			cout << "\n" <<primeiro;
		}
	}	
	if(terceiro > primeiro && terceiro > segundo){
		if(primeiro > segundo){
			cout << "\n" <<terceiro;
			cout << "\n" <<primeiro;
			cout << "\n" <<segundo;
		}
		else{
			cout << "\n" <<terceiro;
			cout << "\n" <<segundo;
			cout << "\n" <<primeiro;
		}
	}
    return 0;
}
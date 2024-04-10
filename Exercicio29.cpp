#include <iostream>
#include <stdlib.h>
using namespace std;

int saque,qtd100,qtd050,qtd020,qtd010,qtd005,qtd002,qtd001;

int main()
{
	cout << "Entre com o valor do saque:";
	cin >> saque;
	qtd100 = saque/100;
	qtd050 = (saque - qtd100*100)/50;
	qtd020 = (saque - qtd100*100 - qtd050*50)/20;
	qtd010 = (saque - qtd100*100 - qtd050*50 - qtd020*20)/10;
	qtd005 = (saque - qtd100*100 - qtd050*50 - qtd020*20 - qtd010*10)/5;
	qtd002 = (saque - qtd100*100 - qtd050*50 - qtd020*20 - qtd010*10 - qtd005*5)/2;	
	qtd001 = (saque - qtd100*100 - qtd050*50 - qtd020*20 - qtd010*10 - qtd005*5 - qtd002*2)/1;	
	cout << "Qtd de 100:" << qtd100;
	cout << "\n";
	cout << "Qtd de 050:" << qtd050;
	cout << "\n";
	cout << "Qtd de 020:" << qtd020;
	cout << "\n";
	cout << "Qtd de 010:" << qtd010;
	cout << "\n";
	cout << "Qtd de 005:" << qtd005;
	cout << "\n";
	cout << "Qtd de 002:" << qtd002;
	cout << "\n";
	cout << "Qtd de 001:" << qtd001;						
    return 0;
}
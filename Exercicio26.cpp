#include <iostream>
#include <stdlib.h>
using namespace std;

int a,b,c;

int main()
{
	cout << "Entre com o primeiro:";
	cin >> a;
	cout << "Entre com o segundo:";
	cin >> b;
	cout << "Entre com o terceiro:";
	cin >> c;
	if(a<b+c && b<a+c && c< a+b){
		cout << "E um triangulo";
	}
	else{
		cout << "Nao e um triangulo";
	}
    return 0;
}
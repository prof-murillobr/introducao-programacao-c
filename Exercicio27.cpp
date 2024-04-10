#include <iostream>
#include <stdlib.h>
using namespace std;

int nota1,nota2,nota3;
float media;

int main()
{
	cout << "Entre com o primeiro:";
	cin >> nota1;
	cout << "Entre com o segundo:";
	cin >> nota2;
	cout << "Entre com o terceiro:";
	cin >> nota3;
	media = (nota1+nota2+nota3)/3;
	if(media >=6){
		cout << "Aluno aprovado";
	}
	else{
		cout << "Aluno reprovado";
	}
    return 0;
}
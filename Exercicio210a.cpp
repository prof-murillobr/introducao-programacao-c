#include <iostream>
#include <stdlib.h>
using namespace std;

int mulhera,mulherb,homema,homemb,soma,produto;

int main()
{
	cout << "Entre com a homem A:";
	cin >> homema;
	cout << "Entre com a homem B:";
	cin >> homemb;
	cout << "Entre com a mulher A:";
	cin >> mulhera;
	cout << "Entre com a mulher B:";
	cin >> mulherb;
	// Calculo de homem maior
	if(homema>homemb && mulhera<mulherb){
		soma = homema + mulhera;
		produto = homemb * mulherb;
	}
	if(homema<homemb && mulhera<mulherb){
		soma = homemb + mulhera;
		produto = homema * mulherb;
	}
	//calculo de mulher menor
	if(homema>homemb && mulhera>mulherb){
		soma = homema + mulherb;
		produto = homemb * mulhera;		
	}
	if(homema<homemb && mulhera>mulherb){
		soma = homemb + mulherb;
		produto = homema * mulhera;
	}							
	cout << " A soma e:"<< soma;
	cout << " Produto:"<< produto;	
    return 0;
}
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int homem1,homem2,mulher1,mulher2,soma,produto,hmn,hmv,mmv,mmn;

using namespace std;


int main(int argc, char** argv) {
	cout << "Entre com o primeiro homem:";
	cin >> homem1;
	cout << "Entre com o segundo homem:";
	cin >> homem2;
	cout << "Entre com a primeira mulher:";
	cin >> mulher1;
	cout << "Entre com a segunda mulher:";
	cin >> mulher2;
	if(homem1 > homem2){
		hmv = homem1;
		hmn = homem2;
	}
	else{
		hmv = homem2;
		hmn = homem1;
	}	
	if(mulher1 > mulher2){
		mmv = mulher1;
		mmn = mulher2;
	}
	else{
		mmv = mulher2;
		mmn = mulher1;
	}
	soma = hmv + mmn;
	produto = hmn * mmv;
	cout << "Soma:" << soma;
	cout << "Produto" << produto;									
}
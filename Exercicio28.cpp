#include <iostream>
#include <stdlib.h>
using namespace std;

int time1,time2;

int main()
{
	cout << "Entre com qtd de gol do time1:";
	cin >> time1;
	cout << "Entre com qtd de gol do time2:";
	cin >> time2;
	if(time1>time2){
		cout << "Time 1 e o vencedor";
	}
	else{
		if(time1 == time2){
			cout << "Empate";
		}
		else{
			cout << "Time 2 e o vencedor";
		}
	}
    return 0;
}
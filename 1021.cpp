#include <bits/stdc++.h>

using namespace std;

int main(){
	//Inicializando variaveis
	double value;
	int counter;
	int notes[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	cin >> value;
	value*=100;
	counter = (int)value;
	
	notes[0] = counter/10000;	//Notas de 100.00
	counter %= 10000;
	notes[1] = counter/5000;	//Notas de 50.00
	counter %= 5000;
	notes[2] = counter/2000;	//Notas de 20.00
	counter %= 2000;
	notes[3] = counter/1000;	//Notas de 10.00
	counter %= 1000;
	notes[4] = counter/500;		//Notas de 5.00
	counter %= 500;
	notes[5] = counter/200;		//Notas de 2.00
	counter %= 200;
	notes[6] = counter/100;		//Moedas de 1.00
	counter %= 100;
	notes[7] = counter/50;		//Moedas de 0.50
	counter %= 50;
	notes[8] = counter/25;		//Moedas de 0.25
	counter %= 25;
	notes[9] = counter/10;		//Moedas de 0.10
	counter %= 10;
	notes[10] = counter/5;		//Moedas de 0.05
	counter %= 5;
	notes[11] = counter;		//Moedas de 0.01

	//Printing on screen
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", notes[0]);
	printf("%d nota(s) de R$ 50.00\n", notes[1]);
	printf("%d nota(s) de R$ 20.00\n", notes[2]);
	printf("%d nota(s) de R$ 10.00\n", notes[3]);
	printf("%d nota(s) de R$ 5.00\n", notes[4]);
	printf("%d nota(s) de R$ 2.00\n", notes[5]);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", notes[6]);
	printf("%d moeda(s) de R$ 0.50\n", notes[7]);
	printf("%d moeda(s) de R$ 0.25\n", notes[8]);
	printf("%d moeda(s) de R$ 0.10\n", notes[9]);
	printf("%d moeda(s) de R$ 0.05\n", notes[10]);
	printf("%d moeda(s) de R$ 0.01\n", notes[11]);
}

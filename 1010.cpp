#include <bits/stdc++.h>

using namespace std;

int main(){
	//Variáveis
	int cod1, qtd1, cod2, qtd2;
	double pre1, pre2, total;
	//Pega codigo, quantidade e preço de cada item
	cin >> cod1 >> qtd1 >> pre1;
	cin >> cod2 >> qtd2 >> pre2;
	
	total = (qtd1 * pre1) + (qtd2 * pre2);
	
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char nome[1];
	
	double sal, venda;	
	
	cin >> nome;
	
	scanf("%lf\n%lf", &sal, &venda);
	
	printf("TOTAL = R$ %.2lf\n", sal + venda * 0.15);
}

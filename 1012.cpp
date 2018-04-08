#include <bits/stdc++.h>

using namespace std;

int main()
{
	//Variaveis
	double a, b, c, area;
	//Pede pelos valores de cada variavel	
	cin >> a >> b >> c;
	//Calculo das areas
	area =  (a*c)/2;				//Area do triangulo
	printf("TRIANGULO: %.3lf\n", area);
	area = 3.14159*pow(c, 2);		//Area do circulo	
	printf("CIRCULO: %.3lf\n", area);
	area = ((a+b)*c)/2;				//Area do trapezio
	printf("TRAPEZIO: %.3lf\n", area);
	area = pow(b, 2);				//Area do quadrado
	printf("QUADRADO: %.3lf\n", area);
	area = a*b;						//Area do retangulo
	printf("RETANGULO: %.3lf\n", area);
}

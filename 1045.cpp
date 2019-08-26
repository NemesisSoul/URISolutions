#include <bits/stdc++.h>
using namespace std;

void swap(double *x, double *y);

int main(int argc, char const *argv[])
{
	double a, b, c;
	cin >> a >> b >> c;
	
	//Putting in order, biggest to lowest
	if (a < b)
		swap(&a, &b);
	if (a < c)
		swap(&a, &c);
	if (b < c)
		swap(&b, &c);

	//Does it form a triangle?
	if(a >= b + c)
	{
		cout << "NAO FORMA TRIANGULO\n";
		return 0;
	}

	if ((a * a) == (b * b) + (c * c))
	{
		cout << "TRIANGULO RETANGULO\n";
	}
	else if ((a * a) > (b * b) + (c * c))
	{
		cout << "TRIANGULO OBTUSANGULO\n";
	}
	else
	{
		cout << "TRIANGULO ACUTANGULO\n";
	}

	if (a == b && a == c)
	{
		cout << "TRIANGULO EQUILATERO\n";
	}
	else if((a == b) || (b == c) || (a == c))
	{
		cout << "TRIANGULO ISOSCELES\n";
	}

	return 0;
}

void swap(double *x, double *y)
{
	double aux = *x;
	*x = *y;
	*y = aux;
}
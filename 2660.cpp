#include <bits/stdc++.h>

using namespace std;

long long mdc(long long a, long long b);
long long mmc(long long a, long long b);

int main()
{
	//Variable Declaration
	long long n, pop, l, minc = 1, res;
	
	//Asks for the population quantity and the limit of iterations
	cin >> n >> l;
	
	//calculus of the least common multiple of each cicada species life cicle
	for(int i = 0; i < n; i++)
	{
		cin >> pop;
		minc = mmc(minc, pop);
	}
	
	
	long long a, x = minc;
	
	res = 1;
	//calculate what is the optimal time.
	for(int i = 2; i <= l; i++)
	{
		a = mmc(minc, i);
		if( a <= l && a > x)
		{
			res = i;
			x = a;
		}
	}
	
	//Prints the result.
	printf("%lld\n", res);
	
}

//calcula o mdc entre dois numeros
long long mdc(long long a, long long b)
{
	if(b == 0)
		return a;
	
	return mdc(b, a%b);
}

//Calculates the Least Common Multiple
long long mmc(long long a, long long b)
{
	return((a*b)/mdc(a,b));
}

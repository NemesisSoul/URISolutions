#include <bits/stdc++.h>

#define PI 3.14159

using namespace std;

int main(){
	double r, vol;
	cin >> r;
	vol = (4/3.0)*PI*(pow(r,3));
	printf("VOLUME = %.3lf\n", vol);
}

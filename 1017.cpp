#include <bits/stdc++.h>

using namespace std;

int main(){
	float time, speed, distance;
	cin >> time >> speed;
	distance = time*speed;
	printf("%.3f\n", distance/12);
}

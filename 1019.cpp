#include <bits/stdc++.h>

using namespace std;

int main(){
	int timeInputed, h=0, m=0, s=0;
	cin >> timeInputed;
	if(timeInputed>3600){
			h=timeInputed/3600;
			timeInputed%=3600;
	}
	if(timeInputed>60){
		m=timeInputed/60;
		timeInputed%=60;
	}
	if(timeInputed>0){
		s=timeInputed;
	}
	printf("%d:%d:%d\n", h, m, s);
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	int value, counter;
	int notes[7] = {0, 0, 0, 0, 0, 0, 0};
	cin >> value;
	counter = value;

	while(counter > 0){	
		if(counter >=100){notes[0] = counter/100; counter %= 100;}
		else if(counter >=50){notes[1] = counter/50; counter %= 50;}
		else if(counter >=20){notes[2] = counter/20; counter %= 20;}
		else if(counter >=10){notes[3] = counter/10; counter %= 10;}
		else if(counter >=5){notes[4] = counter/5; counter %= 5;}
		else if(counter >=2){notes[5] = counter/2; counter %= 2;}
		else if(counter >=1){notes[6] = counter/1; counter = 0;}
	}
	printf("%d\n", value);
	printf("%d nota(s) de R$ 100,00\n", notes[0]);
	printf("%d nota(s) de R$ 50,00\n", notes[1]);
	printf("%d nota(s) de R$ 20,00\n", notes[2]);
	printf("%d nota(s) de R$ 10,00\n", notes[3]);
	printf("%d nota(s) de R$ 5,00\n", notes[4]);
	printf("%d nota(s) de R$ 2,00\n", notes[5]);
	printf("%d nota(s) de R$ 1,00\n", notes[6]);
}

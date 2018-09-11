#include <bits/stdc++.h>

using namespace std;

int main(){
	//variable assignement
	float code[5] = {4.00f, 4.50f, 5.00f, 2.00f, 1.50f};
	float total;
	int product, quantity;
	
	//Asking for the input, wat product and how many of them.
	cin >> product >> quantity;
	
	//Price calculation
	total = code[product-1]*(float)quantity;
	
	printf("Total: R$ %.2f\n", total);
	return 0;
}

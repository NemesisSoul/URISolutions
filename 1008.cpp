#include <bits/stdc++.h>

int main()
{
	float number, hours, salary;
	
	std::cin >> number >> hours >> salary;
	
	std::cout << "NUMBER = " << number << std::endl;
	//Salary needed with precision point of 2
	printf("SALARY = U$ %.2F\n", hours*salary);
	return 0;
}

#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned long number1, number2, result;

    //Program stops when it gets to EOF
    while(std::cin >> number1 >> number2)
    {
       result = number1 ^ number2;
       std::cout << result << "\n";
    }

    return 0;
}

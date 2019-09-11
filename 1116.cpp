#include <iostream>
#include <iomanip>

int main ( int argc, char *argv[])
{
    int number_inputs, value1, value2;
    float result;

    std::cin >> number_inputs;
    for (size_t i = 0; i < number_inputs; i++)
    {
        std::cin >> value1 >> value2;
        if (value2 == 0)
        {
            std::cout << "divisao impossivel" << std::endl;
        }
        else
        {
            result = (float)value1/(float)value2;
           std::cout << std::setprecision(1) << std::fixed << result << std::endl;
        }
    }
    return 0;
}
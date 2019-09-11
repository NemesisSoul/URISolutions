#include <iostream>
#include <string>
#include <cctype>


int main( void )
{
    std::string sentenca = "\n";

    while(std::getline(std::cin, sentenca))
    {
        bool capital = true;
        for (size_t i = 0; i < sentenca.size(); i++)
        {
            if (sentenca[i] == ' ') 
                continue;
            
            if (capital)
            {
                sentenca[i] = toupper(sentenca[i]);
                capital = false;
            } 
            else
            {
                sentenca[i] = tolower(sentenca[i]);
                capital = true;
            }
        }
        std::cout << sentenca << std::endl;
    }
    
    return 0;
}
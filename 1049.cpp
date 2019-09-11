#include <iostream>

int main(int argc, char const *argv[])
{
    std::string filo, ordem, dieta;
    std::cin >> filo >> ordem >> dieta;

    std::string animal;

    //Verifica se é invertebrado ou não
    if (filo == "vertebrado")
    {
        if (ordem == "ave")
        {
            if (dieta == "carnivoro") animal = "aguia";
            else if (dieta == "onivoro") animal = "pomba";
        }
        else if (ordem == "mamifero")
        {
            if (dieta == "herbivoro") animal = "vaca";
            else if (dieta == "onivoro") animal = "homem";
        }
    }
    else if (filo == "invertebrado")
    {
        if (ordem == "inseto") 
        {
            if (dieta == "hematofago") animal = "pulga";
            else if (dieta == "herbivoro") animal = "lagarta";
        }
        else if (ordem == "anelideo")
        {
            if (dieta == "hematofago") animal = "sanguessuga";
            else if (dieta == "onivoro") animal = "minhoca";
        }

    }

    std::cout << animal << std::endl;

    return 0;
}

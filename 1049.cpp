#include<iostream>
#include<string>
using namespace std;

int main()
{
    std::string firstWord, secondWord, thirdWord;
    std::cin >> firstWord >> secondWord >> thirdWord;

    if(firstWord == "vertebrado")
    {
        if(secondWord == "ave")
        {
            if(thirdWord == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else if(thirdWord == "onivoro")
            {
                cout << "pomba" << endl;
            }
        }
        else if(secondWord == "mamifero")
        {
            if(thirdWord == "onivoro")
            {
                cout << "homen" << endl;
            }
            else if(thirdWord == "herbivoro")
            {
                cout << "vaca" << endl;
            }
        }
    }
    else if(firstWord == "invertebrado")
    {
        if(secondWord == "inseto")
        {
            if(thirdWord == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else if(thirdWord == "onivoro")
            {
                cout << "lagarta" << endl;
            }
        }
        else if(secondWord == "anelideo")
        {
            if(thirdWord == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else if(thirdWord == "onivoro")
            {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}

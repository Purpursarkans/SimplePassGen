#include <bits/stdc++.h>

#include "Cross/Cross.hpp"

int main()
{
    //std::string words = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string words = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    std::string symbols = "!?@#$%^&*()-_=+[]{};:/.,<>~";
    std::string nums = "123456789";
    int sizeWords = words.size();
    int sizeSymbols = symbols.size();
    int sizeNums = nums.size();


    std::cout << "Enter num of symbols on password: ";
    int numSymb;
    std::cin >> numSymb;

    std::cout << "Enter use special characters in the password:\n1 - yes\n2 - no\n>>> ";
    int usingSpecSym;
    std::cin >> usingSpecSym;

    std::cout << "Enter num of passwords: ";
    int numPass;
    std::cin >> numPass;

    for (int i = 0; i < numPass; i++)
    {    
        for (int i = 0; i < numSymb; i++)
        {
            int randNum;
            if (usingSpecSym == 1) { randNum = 3; }
            else { randNum = 2; }
            
            int randType = rand() % randNum;
            if(randType == 0)
            {
                int randWords = rand() % sizeWords;
                std::cout << words[randWords];
            }
            else if (randType == 1)
            {
                int randNums = rand() % sizeNums;
                std::cout << nums[randNums];
            }
            else if (randType == 2)
            {
                int randsymbols = rand() % sizeSymbols;
                std::cout << symbols[randsymbols];
            }
        }
        std::cout << std::endl;
    }

    pause();
}
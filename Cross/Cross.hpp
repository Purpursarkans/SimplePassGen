#ifndef CROSS_HPP
#define CROSS_HPP

#include <iostream>

#if defined (__x86_64__) || defined(__aarch64__)

    #ifdef _WIN64
        #define PLATFORM "Windows"
        #define PWIN 1
    #elif __linux__
        #define PLATFORM "Linux"
        #define PLIN 1
    #else
        #define PLATFONR "Unknown"
    #endif
    #define BIT 64
#else
        #define BIT 0
        exit (1);
#endif

void pause()
{
    #ifdef PWIN
        system("pause");
    #elif PLIN
        system("read -n1 -r -p \"Press any key to continue...\" key; echo -e \"\n\"");
    #endif
}

void check()
{   
    if(BIT == 64)
    {
        std::cout << "x64 detect" << std::endl << PLATFORM << " detect" << std::endl;
    }
    else if (BIT != 64)
    {
        std::cout << "need x64-bit " << PLATFORM << std::endl;
    }
}

#endif
// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ostream>
#include<Windows.h>

int main()
{

    // creates variables to be used
    int x = 3;
    int y = 4;

    double z = x / y;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // you can loop k higher to see more color choices
    for (int k = 1; k < 255; k++)
    {
        // pick the colorattribute k you want
        SetConsoleTextAttribute(hConsole, k);
        std::cout << k << " Hello " << std::endl;
    }

    SetConsoleTextAttribute(GetStdHandle(-11), 0x08);

    // adds the two inputs together and then does a new line
    std::cout << x + y << "\n";
    //same but with multiply, etc.
    std::cout << x * y << std::endl;
    std::cout << x - y << std::endl;
    std::cout << z << std::endl;
    std::cout << "End" << std::endl ;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

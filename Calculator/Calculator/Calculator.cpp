

#include <iostream>
#include <ostream>
#include<Windows.h>

using namespace std;
int main()
{

    // creates variables to be used
    int x = 0;
    int y = 0;


    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // you can loop k higher to see more color choices
    for (int k = 1; k < 255; k++)
    {
        // pick the colorattribute k you want
        SetConsoleTextAttribute(hConsole, k);
        std::cout << k << " Hello " << std::endl;
    }

    SetConsoleTextAttribute(GetStdHandle(-11), 0x08);

    string chosenMode;
    int numbersNumber;

    // adds the two inputs together and then does a new line
    std::cout << x + y << "\n";
    //same but with multiply, etc.
    std::cout << x * y << std::endl;
    std::cout << x - y << std::endl;
    std::cout << "End" << std::endl;

    cout << "Type a number for X: ";
    cin >> x;
    cout << "Type a number for Y: ";
    cin >> y;

    cout << "Total Multiplied: " << x * y << "\n";

    cout << "Total Divided: " << x / y << "\n" << "      Or: " << y / x << "\n";

    cout << "Total Added: " << x + y << "\n";

    cout << "Total Subtracted: " << x - y << "\n" << "      Or: " << y - x << "\n";
     



}

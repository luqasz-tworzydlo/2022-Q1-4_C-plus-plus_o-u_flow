﻿// niedomiar-underflow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // std::cout << "Hello World!\n";

    char exy;

    exy = -128;
    cout << int(exy) << endl;
    exy = exy - 1;
    cout << int(exy);
    return 0;

    // z kolei kolejny poniższy kod ukazuje operację, gdzie zachodzi niedomiar
    // [ czyli sytuację, iż jest dana wartość jest wartością możliwie najniższą
    // i nie ma już mniejszej – w tym wypadku nasza wartość w przypadku
    // wykonania operacji odejmowania jeden pokaż wartość 127
    // w związku z przekroczeniem danego zakresu ]
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

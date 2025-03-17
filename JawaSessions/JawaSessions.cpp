// JawaSessions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    // int number = 325;
    // int singles , tens, handrades;
    // singles = number % 10;
    // tens = number % 100 / 10;
    // handrades = number / 100;
    // int result= singles *100 + tens * 10 + handrades;
    // cout<<result;

    int singles , tens , hanredes;
    int number = 876;
    singles = number % 10;//8
    number = number / 10;//87
    tens = number % 10;//7
    number = number / 10;//8
    hanredes = number % 10;//8
    number = number / 10;//0
    int result = singles * 100 + tens * 10 + hanredes;
    cout << result << endl;



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

#include <iostream>
using namespace std;
/*
    x => 15,14,13,12,11, .... , 1,0
 */
int main()
{
    // int number;
    // cout << "enter number:" << endl;
    // cin >> number;
    // while (number > 1)
    // {
    //   if (number % 2 == 1 || number == 2)
    //   {
    //     cout << "the number is  prime" << endl;
    
    //   }
    //   else
    //   {
    //     cout << "the number is not prime" << endl;
    //   }
    // }

    //10 : 1,2,5 => 3
    //15 : 1,3,5 => 3
    //14 : 1,2,7 => 3
    //20 : 1,2,4,5,10 =>5
    //30 : 1,2,3,5,6,10,15 => 7
    int number = 10;//1,2,5
    int resultCounter = 0;
    int start = 1;
    int end = number / 2;
    while (start <= end)
    {
        if(number%start == 0)
        {
            resultCounter++;
        }
        cout<<resultCounter<<endl;
        start++;
    }


    

}

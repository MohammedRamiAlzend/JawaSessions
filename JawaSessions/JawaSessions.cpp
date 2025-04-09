#include <iostream>
using namespace std;
/*
    x => 15,14,13,12,11, .... , 1,0
 */
int main()
{
    int number= 113;
    int start= 2;
    bool isPrime = true;
    int end= number/2;
    while (start <= end)
    {
        if(number % start == 0)
        {
            isPrime = false;
        }
        start++;
    }
    if(isPrime == false)
    {
        cout<<"not a prime number"<<endl;
    }
    else
    {
        cout<<"prime number"<<endl;
    }



    

}

#include <iostream>
using namespace std;
/*
    x => 15,14,13,12,11, .... , 1,0
 */
int main()
{
    //[1,10]=>1,3,5,7,9 => 5
    //[11,17] => 11,13,15,17 => 4
    int start=11, end=17;
    int oddCounter=0;
    while (start<=end)
    {
        if(start%2==1)
        {
            oddCounter++;
        }
        start++;
    }
    cout<<oddCounter<<endl;
}

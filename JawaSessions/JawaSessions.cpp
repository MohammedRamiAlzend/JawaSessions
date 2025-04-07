#include <iostream>
using namespace std;
/*
    x => 15,14,13,12,11, .... , 1,0
 */
int main()
{
  // n! 
  // 5! = 5 * 4 * 3 * 2 * 1
  // 

  int n ;
  cout<<"Enter a number : ";
  cin >> n;
  int s = n;
  while (n>1)
  {
      s = s * --n;
  }

  cout<<s<<endl;
  cout<<n<<endl;
}

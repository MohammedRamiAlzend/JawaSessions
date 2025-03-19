// JawaSessions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
// int number;
//  cout << "Enter a number: ";
//  cin>>number;
//
//  switch (number) {
//   case 1 :
//   case 3 :
//   case 5 :
//    cout<<"Jawa"<<endl;
//   break;
//   case 2 :
//   case 4 :
//    cout<<"Rami"<<endl;
//   break;
//   default:
//    cout<<"404"<<endl;
//   break;
//
//

int number = 9;
 switch (number%2 != 0) {
  case 1:
   cout<< "odd"<<endl;
  break;
  case 0:
   cout<< "even"<<endl;
  break;
 }

 if (number%2 != 0) {
  cout<< "even"<<endl;
 }
 else {
  cout<<"odd"<<endl;
 }




 }



/*
 * switch(var)
 * {
 *      case v1 :
 *      //code
 *          break;
*       case v2 :
*       //code
 *          break;
 *
 *        default:
 *        //
 *           break;
 *
 *
 * }
 *
 */
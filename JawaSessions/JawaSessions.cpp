#include <iostream>
using namespace std;
int main()
{
	/*int value;
	cout << "Enter a value to indicate if it positive or not" << endl;
	cin >> value;
	if (value > 0)
	{
		cout << "positive";
	}
	if (value < 0)
	{
		cout << "negative";
	}
	if (value == 0)
	{
		cout << "Zero";
	}*/


	//cout << "Enter points:" << endl;
	//int point;
	//cin >> point;
	//if (point >= 50)
	//{
	//	cout << "pass";
	//}
	//else
	//{
	//	cout << "fail";
	//}

	/*
	* and &&
	* t + t = t
	* t + f = f
	* f + t = f
	* f + f = f
	*
	* or ||
	* t + t = t
	* t + f = t
	* f + t = t
	* f + f = f
	*/
	string dayName;
	cout << "Enter day:" << endl;
	cin >> dayName;//Sun

	if (dayName == "sun" 
		|| dayName == "Sun" || 
		   dayName == "sUn" ||
		   dayName == "SUn")
	{
		cout << "Sunday" << endl;
	}
	else if (dayName == "Mon")
	{
		cout << "Monday" << endl;
	}
	else if (dayName == "Tue")
	{
		cout << "Tuesday" << endl;
	}
	else {
		cout << "404 Not Found";
	}




}
/*
* if statement
* syntax:
* if(condition)
* {
*	//code executed if condition is true
* }
* ******************************
*
* boolean operators :
*	< less than
*	> greater than
*	== equal
*	! = not equal
*	<= less than or equal
*	>= greater than or equal
*/
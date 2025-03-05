#include <iostream>
using namespace std;
int main()
{
	string monthename;

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
#include <iostream>
using namespace std;

int main()
{
	//int i = 1, j;
	//while (i <= 5)
	//{
	//	j = 1;
	//	while (j <= 5)
	//	{
	//		/*	if (i==1 || j==1 || i==5)
	//		{
	//			cout << "* ";
	//		}
	//		else
	//		{
	//			cout << "  ";
	//		}*/
	//		if (j == 1 || i == 1 || i == 5 || (j == 5 && i>=3) || (i==3 && j>=3))
	//			cout << "* ";
	//		else
	//			cout << "  ";

	//		j++;
	//	}
	//
	//	cout << "\n";
	//	i++;
	//}
	//int i = 1, j; int n = 5;
	//while (i <= n)
	//{
	//	j = 1;
	//	while (j <= n)

	//	{
	//		if (j==1 || j==n || (i<=3 && i==j) || (i+j==n+1 && i<=3))
	//		{
	//			cout << "* ";
	//		}
	//		else
	//		{
	//			cout << "  ";
	//		}

	//		j++;
	//	}

	//	cout << "\n";
	//	i++;
	//}
   int i = 1, j;
   while (i <= 5)
   {
	   j = 1;
	   while (j <= 5)

	   {
		   if (((j == 3 || j == 5) && i >= 3) || (i == 3 && j >= 3) || (i + j == 5 && i <= 2) || ((i == 2 || i == 3) && j == 5))
		   {
			   cout << "* ";
		   }
		   else
		   {
			   cout << "  ";
		   }

		   j++;
	   }
	   cout << "\n";
	   i++;
   }
}

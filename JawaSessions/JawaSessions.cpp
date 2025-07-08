#include <iostream>
using namespace std;

int main()
{
	double sum = 0, i = 1;
	double avg = 0;
	while (i <= 999)
	{
		sum = sum + i;
		i++;
	}
	avg = sum / i;
	cout << sum << endl;
	cout << avg << endl;
}

#include <iostream>
using namespace std;

int main()
{
    int gradeNumber, gradeValue, maxNumber, lowestNumber,i = 1;
    cout << "enter number of grades:" << endl;
    cin >> gradeNumber;
    while (i <= gradeNumber)
    {
        cout << "enter gradeValue:" << endl;
        cin >> gradeValue;
        if (i == 1)
        {
            maxNumber = lowestNumber = gradeValue;
        }
        if (gradeValue > maxNumber)
        {
            maxNumber = gradeValue;
        }
        if (gradeValue < lowestNumber)
        {
            lowestNumber = gradeValue;
        }
        i++;
    }
    cout << "maxNumber:" << maxNumber << endl;
}

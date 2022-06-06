#include <iostream>
#include <string>
using namespace std;

int main()
{
    int year;
    cin >> year;
    string stringYear = to_string(year);
    int yearSize = stringYear.size();
    int *arrayOfYearDigits = new int[yearSize];
    int i = 0;
    string statement;
    while (year > 0)
    {
        int yearDigit = year % 10;
        arrayOfYearDigits[i] = yearDigit;
        i++;
        year = year / 10;
    }
    int valueOfI = 0;
    for (int i = 0; i < yearSize; i++)
    {
        for (int j = 0; j < yearSize; j++)
        {
            if (i != j)
            {
                if (arrayOfYearDigits[i] == arrayOfYearDigits[j])
                {
                    statement = "NO";
                    break;
                }
            }
        }
        valueOfI = i;
    }
    if (valueOfI + 1 == yearSize && statement != "NO")
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
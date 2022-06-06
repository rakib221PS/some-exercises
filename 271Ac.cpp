#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    string stringYear = to_string(year);
    int yearLength = stringYear.length();
    int *arrOfY = new int[yearLength];
    string statement = "YES";
    int distinctYear = year + 1;
    while (1)
    {
        int newYear = distinctYear;
        int i = 0;
        while (newYear > 0)
        {
            int newYearDigits = newYear % 10;
            arrOfY[i] = newYearDigits;
            newYear = newYear / 10;
            i++;
        }
        for (int i = 0; i < yearLength; i++)
        {
            for (int j = 0; j < yearLength; j++)
            {
                if (i != j)
                {
                    if (arrOfY[i] == arrOfY[j])
                    {
                        statement = "NO";
                    }
                }
            }
        }
        if (statement == "YES")
        {
            cout << distinctYear;
            break;
        }
        distinctYear++;
    }

    return 0;
}
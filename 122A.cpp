#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, totalLuckyDigit = 0;
    cin >> n;
    int digit = n;
    string number = to_string(n);
    int numberSize = number.size();

    while (digit > 0)
    {
        int singleDigit = digit % 10;
        if (singleDigit == 4 || singleDigit == 7)
        {
            totalLuckyDigit++;
            digit = digit / 10;
        }
    }

    if (totalLuckyDigit == numberSize)
    {
        cout << "YES";
    }
    else
    {
        int stepNumebrLength = 0;
        int checkNumber;
        for (int i = 0; i <= 1000; i++)
        {
            checkNumber = i;
            string stringStepNumber = to_string(i);
            int stepNumberSize = stringStepNumber.size();
            while (checkNumber > 0)
            {
                int stepLuckyDigit = checkNumber % 10;
                if (stepLuckyDigit == 4 || stepLuckyDigit == 7)
                {
                    stepNumebrLength++;
                }
                checkNumber = checkNumber / 10;
            }
            if (stepNumebrLength == stepNumberSize)
            {
                if (n % checkNumber == 0)
                {
                    cout << "YES";
                    break;
                }
            }
            stepNumebrLength = 0;
        }
        if (checkNumber == 1000)
        {
            cout << "NO";
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, X = 0;
    cin >> n;
    string command;
    while (n > 0)
    {
        cin >> command;
        if (command[1] == '+')
        {
            X++;
        }
        else
        {
            --X;
        }
        n--;
    }
    cout << X;
    return 0;
}
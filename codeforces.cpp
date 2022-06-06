#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int length = sizeof(arr)/sizeof(arr[0]);
    int lastIndex = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 1)
        {
            cout << "Hard";
            break;
        }
        lastIndex++;
    }

    if (lastIndex == length)
    {
        cout << "Easy";
    }

    return 0;
}
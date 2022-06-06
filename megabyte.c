#include <stdio.h>

int main(void)
{
    int n, X = 0;
    scanf("%d", &n);
    int i = n;
    char command[3];
    while (i > 0)
    {
        scanf("%s", command);
        if (command[1] == '+')
        {
            X++;
        }
        else
        {
            --X;
        }
        i--;
    }
    printf("%d", X);
    return 0;
}
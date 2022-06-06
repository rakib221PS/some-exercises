#include <stdio.h>

int main(void)
{
    int k, n, w, total = 0;
    scanf("%d %d", &k, &n, &w);
    for (int i = 1; i <= w; i++)
    {
        total += i * k;
    }
    if (n >= total)
    {
        printf("%d", 0);
    }
    else
    {
        printf("%d", total - n);
    }
    return 0;
}
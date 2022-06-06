#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **twoDarray = NULL;
    twoDarray = (int **)malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++)
    {
        twoDarray[i] = (int *)malloc(2 * sizeof(int));
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            twoDarray[i][j] = i;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\n", twoDarray[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        free(twoDarray[i]);
    }
    free(twoDarray);
    return 0;
}
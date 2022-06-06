#include <stdio.h>

int main(void)
{
    int array[4][4] = {
        {32, 99, 53, 89},
        {96, 18, 82, 57},
        {32, 99, 53, 89},
        {96, 18, 82, 57}};
    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; ++j)
            {
                if (array[k][i] > array[k][j])
                {
                    int swap = array[k][i];
                    array[k][i] = array[k][j];
                    array[k][j] = swap;
                }
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
        
    }
    
}
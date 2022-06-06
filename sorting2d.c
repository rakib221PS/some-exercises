#include <stdio.h>
#define ROW 3
#define COL 3
int main()                                                                                        
    {                                                                                                    
        int mat[ROW][COL] = {{3,4,0},
        {4,1,9},{7,2,0}};                                                                               
        int i, j, k, l, n, tmp;                                                                          
       
        // scanf("%d", &n);                                                                                
        
        // for (i = 0; i < n; i++)                                                                          
        // {                                                                                                
        //     for (j = 0; j < n; j++)                                                                      
        //     {                                                                                            
        //         scanf("% d", &mat[i][j]);                                                                
        //     }                                                                                            
        // }
        n = 3;
    for (i = 0; i < n; i++)
{
    for (j = 0; j < n; j++)
    {
        tmp = mat[i][j];
        l = j + 1;
        for (k = i; k < n; k++)
        {
            while (l < n)
            {
                    if (tmp < mat[k][l])
                {
                    tmp = mat[k][l];
                    mat[k][l] = mat[i][j];
                    mat[i][j] = tmp;
                }
                l++;
            }
            l = 0;
        }
    }
}

    printf("\n");
printf("Resultant Matrix: \n");
for (i = 0; i < n; i++)
{
    for (j = 0; j < n; j++)
    {
        printf("% d", mat[i][j]);
    }
    printf("\n");
}
return 0;
}

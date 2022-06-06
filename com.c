#include <stdio.h>

int main(void){
    int n,X=0;
    char ch[3];
    scanf("%d",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%c",ch);
        if (ch == "++X")
        {
            X++;
        }
        else
        {
            --X;
        }
    }

    printf("%d",X);
    
    return 0;
}
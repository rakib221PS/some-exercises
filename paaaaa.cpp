#include<stdio.h>
int main()
{
    float number;
    printf("Enter Number: ");
    scanf("%f",&number);
    int integral = number;
    float fractional = number - integral;
    printf("Integer part:%d\n", integral);
    printf("Real part:%.3f", fractional);
    return 0;
}
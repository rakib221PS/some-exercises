#include <stdio.h>

int main()
{
    float a, b, c = 0;
    int n;
    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);
    printf("Enter number 0 to 4 : \n0 for exist\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        c = a + b;
        printf("Addition of %f and %f is %.2f", a, b, c);
        break;
    case 2:
        c = a - b;
        printf("Subtraction of %f and %f is %f", a, b, c);
        break;
    case 3:
        c = a * b;
        printf("Multiplication of %f and %f is %f", a, b, c);
        break;
    case 4:
        if (b==0)
        {
            printf("Divisor can not be zero\n");
        }
        else
        {
        c = a / b;
        printf("Division of %f and %f is %f", a, b, c);            
        }
        break;

    default:
        printf("Exit the program");
        break;
    }
    return 0;
}
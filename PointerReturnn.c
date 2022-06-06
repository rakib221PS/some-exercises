// Write a function alternating, whose parameters are two pointers to strings of identical length.
//          This function returns a pointer to a new string made up of the characters of the first and second strings alternately.
//          Use the malloc function to allocate memory for the new string. Test this function in the main function.
//          Example:

//                 char*s1 = "tu";
//                 char*s2 = "re";
//                 char* a = alternating(s1,s2);
//                 printf("%s", a); //true
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *alternative(char *c, char *b)
{
    int n = (strlen(c) + strlen(b));
    char *d = (char *)malloc(n * sizeof(char));
    int j = 0;
    for (j = 0; c[j] != '\0'; j++)
    {
        d[j] = c[j];
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        d[j] = b[i];
        j++;
    }
    return d;
}

int main()
{
    char *name = "rak";
    char *sur = "kib";
    char *a = alternative(name, sur);
    printf("%s", a);
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%c", a[i]);
    }
    

    return 0;
}
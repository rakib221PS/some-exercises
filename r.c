#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int greater(char, char);
int smaller(char, char);

void sort(char *tab, int n, int(wsk)(char, char));
void print(char *tab, int n);
void read(char *tab, int n);

int main()
{
    printf("\n\n\n");
    printf("\t\t\t\t\t********************\n");
    printf("\t\t\t\t\t* Sorting the word *\n");
    printf("\t\t\t\t\t********************\n");
    printf("\n\n");

    int max;
    printf("\n\tEnter the maximum length of a word:\t");
    scanf("%d", &max);

    char *tab = (char *)malloc(max * sizeof(char));

    printf("\n\tEnter a word:\t");
    scanf("%s", tab);

    int n = strlen(tab);

    printf("\n\tChoose the order of sorting:\n");
    printf("\t1. ascending order (ASCII).\n");
    printf("\t2. descending order (ASCII).\n");
    printf("\t0. Exit the program.\n\n");

    int nr;
    printf("\n\tEnter the number of action: \t");
    scanf("%d", &nr);
    printf("\n");

    switch (nr)
    {
    case 1:
        printf("\n\tWord sorted in ascending order (ASCII):\t");
        sort(tab, n, greater);
        // printf("%s", tab );//
        print(tab, n);
        break;
    case 2:
        printf("\n\tWord sorted in descending order (ASCII):\t");
        sort(tab, n, smaller);
        // printf("%s", tab );//
        print(tab, n);
        break;
    case 0:
        printf("\n\tGoodbye! ;-)");
        break;
    default:
        printf("\n\tThere is no such action number.");
    }
    printf("\n\n");
    free(tab);
    return 0;
}

int greater(char a, char b)
{
    return a > b ? 1 : 0;
}
int smaller(char a, char b)
{
    return a < b ? 1 : 0;
}

void sort(char *tab, int n, int(ptr)(char, char)) // ptr - pointer to function

{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (ptr(tab[j], tab[j + 1]))
            {
                int pom = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = pom;
            }
}

void print(char *tab, int n)
{
    int i;
    for (i = 0; i < n && *tab != '\n'; i++)
        printf("%c", *tab++);
}

void read(char *tab, int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%c", tab++);
}

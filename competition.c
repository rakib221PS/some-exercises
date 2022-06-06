
#include <stdio.h>
#include <stdlib.h>

int *gradingStudents(int *grades, int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    int *grades = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &grades[i]);
    }

    int *p = gradingStudents(grades, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", p[i]);
    }

    return 0;
}

int *gradingStudents(int *grades, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = grades[i];
        while (x >= 38 && x % 5 != 0)
        {
            x++;
        }
        if (x - grades[i] < 3)
        {
            grades[i] = x;
        }
    }
    return grades;
}
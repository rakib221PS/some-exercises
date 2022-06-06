#include <stdio.h>
#include <string.h>

typedef struct State
{
    char name[10];
    // char *name;
    int population;
    char language[10];
    // char *language;
} st;

void read(st *sta)
{
    printf("Name of state: ");
    scanf("%s", sta->name);
    printf("Population of state: ");
    scanf("%d", &sta->population);
    printf("Language of state : ");
    scanf("%s", sta->language);
}

int main(void)
{
    st state1, state2;
    read(&state1);
    read(&state2);
    if (strcmp(state1.name,state2.name)==0)
    {
        printf("SAME");
    }
    else
    {
        printf("Not same");
    }
    return 0;
}

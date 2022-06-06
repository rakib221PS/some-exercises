#include <stdio.h>
#include <string.h>

typedef struct State{
    //char name[];
    char *name;
    int population;
    //char language[];
    char *language;
}st;

void read(st *state1,st *state2){
    printf("Name of state 1: ");
    scanf("%s",state1->name);
    printf("Population of state 1: ");
    scanf("%d",state1->population);
    printf("Language of state 1: ");
    scanf("%s",state1->language);
    printf("Name of state 2: ");
    scanf("%s",state2->name);
    printf("Population of state 2: ");
    scanf("%d",state2->population);
    printf("Language of state 2: ");
    scanf("%s",state2->language);
}

int main(void){
    st state1,state2;
    read(&state1, &state2);
    return 0;
}

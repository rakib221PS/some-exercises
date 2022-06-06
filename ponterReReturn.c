#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenate(char *name,char *sureName){
    //int size = sizeof(name)/sizeof(name[0]);
    int size = strlen(name)+strlen(sureName);
    char *con=(char *)malloc(size*sizeof(char));
    int i = 0;
    while(name[i]!='\0'){
        con[i]=name[i];
        i++;
    }
    int j = 0;
    while(sureName[j]!='\0'){
        con[i]=sureName[j];
        i++;
        j++;
    }
    return con;
}

int main(void){
char name[]="rakib";
//char *name="rakib";
char sureName[]="hasana";
//char *sureName="hasanaa";
char *a=concatenate(name,sureName);
printf("%s",a);
return 0;
}

#include<stdio.h>

int main(){
    char name[] = {};
    int age;
    printf("Enter your name: ");
    gets(name);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("\n%s is %d years old",name,age);
}
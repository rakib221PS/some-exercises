#include <stdio.h>
#include <string.h>

typedef struct Person
{
    char name[20];
    int age;
    float salary;
} Person;

typedef struct newPerson{
    Person person;
    int old;
    float weight;
}newPerson;

int main(void)
{
    Person Person1;
    strcpy(Person1.name, "MD RAKIB HASAN");
    Person1.age = 20;
    Person1.salary = 10000000;
    newPerson p;
    strcpy(p.person.name , "hello world");
    printf("%s\n",p.person.name);
    return 0;
}
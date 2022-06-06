#include <stdio.h>
#include <time.h>

typedef struct Time{
    int hour,minute,second;
}Time;
void write(const Time *t);
int sec(const Time *t);
int main(void){
    Time time1 = {23,39,40};
    Time time2 = {24,20,30};
    // printf("%d",time1.hour);
    write(&time1);
    printf("Total second from mid night %d",sec(&time1));
    return 0;
}

void write(const Time *t){
    printf("%d:%d:%d\n",t->hour,t->minute,t->second);
}

int sec(const Time *t){
    int totalSecond = ((23-0)*60*60)+((39-0)*60)+40;
    return totalSecond; 
}
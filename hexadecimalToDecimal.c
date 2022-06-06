#include <stdio.h>
#include <math.h> 
#include <string.h> 
int main(){
    int number;
    printf("Enter a hexadecimal number: ");
    scanf("%x",&number);
    printf("\nDecimal value of this %x is %d",number,number);
    return 0;
}

/** 
 * C program to convert Hexadecimal to Decimal number system 
 */ 
 
// int main() 
// { 
//     char hex[17]; 
//     long long decimal; 
//     int i = 0, val, len; 
 
//     decimal = 0;
 
//     /* Input hexadecimal number from user */ 
//     printf("Enter any hexadecimal number: "); 
//     gets(hex); 
 
//     /* Find the length of total number of hex digit */ 
//     len = strlen(hex); 
//     len--; 
 
//     /* 
//      * Iterate over each hex digit 
//      */ 
//     for(i=0; hex[i]!='\0'; i++) 
//     { 
  
//         /* Find the decimal representation of hex[i] */ 
//         if(hex[i]>='0' && hex[i]<='9') 
//         { 
//             val = hex[i] - 48; 
//         } 
//         else if(hex[i]>='a' && hex[i]<='f') 
//         { 
//             val = hex[i] - 97 + 10; 
//         } 
//         else if(hex[i]>='A' && hex[i]<='F') 
//         { 
//             val = hex[i] - 65 + 10; 
//         } 
 
//         decimal += val * pow(16, len); 
//         len--; 
//     } 
 
//     printf("Hexadecimal number = %s\n", hex); 
//     printf("Decimal number = %lld", decimal); 
 
//     return 0; 
// } 

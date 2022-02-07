// Question : write a c program to find all ASCII character with their value

#include<stdio.h>

int main()
{
    int i;
    for(i = 33; i <= 126; i++){
       printf("ASCII code : %d\n",i);
       printf("ASCII character : %c\n",i);
    }
    return 0;
}
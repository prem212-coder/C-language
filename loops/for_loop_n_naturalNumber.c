/*
write a program to print frist n natural numbers using forloop.
*/

#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the which number you whant to print all natural number: ");
    scanf("%d",&n);

    for(i = 0; i <= n; i++){
        printf("N natural number using for loop: %d\n",i);
    }
    return 0;
}
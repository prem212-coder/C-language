/*
write a program to print frint first n natural numbers using do-while loop.
*/

#include<stdio.h>
int main()
{
    int n,i = 0;

    printf("Enter the number n:");
    scanf("%d",&n);

    do{
        printf("Natural number of n value : %d\n",i);
        i++;
    }
    while (i<=n);
    return  0;
}
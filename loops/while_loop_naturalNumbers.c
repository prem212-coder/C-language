/*
write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.
*/

#include<stdio.h>
int main()
{
    int i;
   printf("Enter the number 10:");
   scanf("%d",&i);
    while(i <= 20){
        if (i >= 10)
        {
        printf("The value of i is %d\n",i);
        }
        i++;
    }
   return 0;
}
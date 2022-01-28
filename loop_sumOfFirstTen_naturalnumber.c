/*
write a program to sum first ten natural number using while loop.
*/

#include<stdio.h>
int main()
{
 int sum = 0,i = 1;
 while (i<=10)
 {
   sum = sum + i;
   
   i++;
 }
 printf("%d\n",sum);
 return 0;
 
}
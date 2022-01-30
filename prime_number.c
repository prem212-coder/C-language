/*
Write a program to check whther a given number is prime or not using loops.
*/

#include<stdio.h>
int main()
{

  int i,number; 

  printf("Enter the number : ");
  scanf("%d",&number);

  for ( i = 2; i < number; i++)
  {
      if(number%i == 0){
          printf("the number is not prime");
      }
      else
      {
        printf("the number is prime")
;      }
       return 0;     
  }
  
}

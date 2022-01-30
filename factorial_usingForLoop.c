#include<stdio.h>
int main()
{
    int i,number,fact = 1;
    printf("Enter the number value:");
    scanf("%d",&number);

    for (i = 1; i <= 5; i++)
    {
        fact = fact * i;
         printf("Factorial of given numberis : %d",fact);
    }
   

    return 0;
}


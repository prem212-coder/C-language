// Q.13 swap first and last digits of a number

#include<stdio.h>
int main()
{
    int first,last,temp;
    printf("Enter the number:");
    scanf("%d",&first);

    last = first%10;
    printf("last number before swap: %d\n",last);
    while (first > 9)
    {
       first = first / 10;
       
    }
       printf("first number before swap:%d\n",first);
       
       temp  = last;
       last  = first;
       first = temp;

       printf("swap number last become first: %d\n",first);
       printf("swap number first become last: %d\n",last);
       
       return 0;
}
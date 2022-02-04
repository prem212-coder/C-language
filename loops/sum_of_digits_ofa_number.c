// calculate of digits of all numbers
#include<stdio.h>
int main()
{
    int number,read,sum = 1 ;
    printf("Enter the number : ");
    scanf("%d",&number);

    while(number > 0){
        read= number % 10;
        sum = sum + read;
        number = number / 10; 
    }
    printf("sum of all the digits :%d\n",sum);

    return 0;
}
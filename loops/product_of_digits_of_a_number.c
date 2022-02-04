// Q. product of digits of a number
#include<stdio.h>
int main()
{
    int read,number,product = 1;
    
    printf("Enter the number : ");
    scanf("%d",&number);
    while(number > 0){
         
        read = number % 10;
        product = product * read;
        number = number / 10;

    }
    printf("Product og digits of numbers:%d\n",product);

    return 0;
}
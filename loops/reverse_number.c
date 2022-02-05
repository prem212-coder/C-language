// Q Enter a number and print its reverse

#include<stdio.h>
int main(){
    int read,number,sum = 0;

    printf("Enter the number : ");
    scanf("%d",&number);

    while(number > 0){

        read = number % 10;
        sum  = sum * 10 + read;
        number = number / 10;
    }
    printf("Reverse number :%d\n",sum);
    
    return 0;
}
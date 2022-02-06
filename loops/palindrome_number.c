// find palindrom number
#include<stdio.h>
int main()
{
    int read,number,temp,sum = 0;
    
    printf("Enter the number: ");
    scanf("%d",&number);
    temp = number;
    while(number > 0){
        read = number % 10;
        sum  = sum * 10 + read;
        number = number / 10;
    }
    if(temp == sum){
        printf("the number is palindrome %d\n",sum);
    }
    else {
        printf("number is not palindrome%d\n",sum);
    }
    
    return 0;
}
//Find the frequency of a digit in a number

#include<stdio.h>

int main(){
    
    int number,digit,count = 0,read;

    printf("Enter the number : ");
    scanf("%d",&number);

    printf("Enter the digit do you wanna check frequency: ");
    scanf("%d",&digit);

    while (number > 0)
    {
        read   = number % 10;
        number = number / 10;

        if(digit == read){
           count++;
        } 
        
    }
     
     printf("frequency of digit is : %d\n",count);

     return 0;
}
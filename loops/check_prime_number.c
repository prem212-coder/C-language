#include<stdio.h>
int main(){

    int number,count = 0;

    printf("Enter the number:");
    scanf("%d",&number);

    for (int i = 2; i < number ; i++)
    {
        
        
    if (number%i == 0)
    {
        count++;

    }   

    if (count == 1)
    {
        printf("Number is not prime%d\n");
    }
    
        else{ 
        printf("Number is prime%d\n");
        }

        return 0;
    }


}
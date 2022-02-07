// find all factors of a number.

#include<stdio.h>
int main(){
    int number;

    printf("Enter the number:");
    scanf("%d",&number);
    printf("Find Factors of : %d\n",number);
    for (int i = 1; i <= number; i++)
    {
        if (number%i == 0)
        {
            printf("factors is : %d\n",i);
        }
    
    }
    
    return 0;
}
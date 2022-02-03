// C program to count number of digits in an integer

#include<stdio.h>

int main(){

    int n, count = 0;
    printf("Enter the number");
    scanf("%d",&n);

    while (n!= 0)
    {
        count ++;
        n = n/10;
    }
    printf("Total digits in the number is : %d\n",count);
    return 0;
    
}
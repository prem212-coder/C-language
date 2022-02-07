// write a c program to find power of a numbwer using loop.

#include<stdio.h>
#include<math.h>

int main(){
    int base,exponent;
    long long power = 1;
    
    printf("Enter the number : ");
    scanf("%d",&base);

    printf("Enter the power : ");
    scanf("%d",&exponent);

    for (int i = 1; i <= exponent; i++)
    {
        power = power * base;
    }
     printf("%d ^ %d = %lld\n",base,exponent,power);

     return 0;
}

#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);

    if(a%2 == 0){
        printf("%d is even\n", a);
    }
    else{
        printf("its a odd number");
    }

    return 0;
}
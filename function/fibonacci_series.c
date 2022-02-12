// write a program to print fibonacci series

#include<stdio.h>
int main()
{
    int a = 0, b = 1, c,n;
     
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Fibonacci series for nth number is :");
    for (int i = 0; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
    }
    
    return 0;
}
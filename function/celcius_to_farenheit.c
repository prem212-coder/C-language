// write a function to convert celcius temperature into farenhite

#include<stdio.h>

int  temperatures(int celsius);

int main()
{
    int temp;

    printf("Enter the number:\n");
    scanf("%d",&temp);

    printf("celsius to fahrenheit conversion is: %dF\n",  temperatures(temp));
    return 0;

}

int temperatures(int celsius){

    int result = (celsius * 1.8) + 32;
    return result;
}

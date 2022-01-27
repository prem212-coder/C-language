// write a program to convert celcius(centigrate dgrees temprature to farenheit)

#include<stdio.h>
int main()
{
    double celsius,fahrenheit;

    printf("Enter the value of celsius: ");
    scanf("%lf",&celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%lf celsius covert to fahrenheit is : %lf",celsius,fahrenheit);

    return 0;
}
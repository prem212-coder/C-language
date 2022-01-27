// wrote a program to calculate simple intrest for a set of values representing principle, no of years and rate of interest.

#include<stdio.h>
int main()
{
    float final_amount,principal,rate,time; //p = initial principal blance,r =annual intrest rate, t = time(in year)

    printf("Enter the value of initial principal balance:\n");
    scanf("%f",&principal);

    printf("Enter the value of annual intrest rate :\n ");
    scanf("%f",&rate);

    printf("enter the value of time(in year):\n");
    scanf("%f",&time);

    final_amount = (principal * rate * time);
 
    printf("Simple intrest: %f",final_amount);

    return 0;
}
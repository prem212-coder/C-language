// write a function to calculate force of attraction on a body of mass m exerted by earth (g = 9.8 m/s^2)
#include<stdio.h>
float forceOfAttraction(float mass);

int main(){
    float m;   
    printf("Enter the value for mass of mass of object: ");
    scanf("%f",&m);

    printf("force of atrraction is :%1f\n ",forceOfAttraction(m));
    return 0;

    }

float forceOfAttraction(float mass){
      float result = mass * 9.8;
      return result;
     
}
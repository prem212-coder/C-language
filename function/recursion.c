#include<stdio.h>
double factorial(double x); //function prototype

int main(){
    double a; 
    printf("Enter the number : ");   
    scanf("%lf",&a);         // function call
    printf("The valuse of factorial %lf is %lf", a, factorial(a));
    return 0;
}

double factorial(double x){     // function defination
    if (x==1 || x==0){
       return 1;
    }
    else{
        return x * factorial(x - 1);
    }
}

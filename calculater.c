// Write a c program to calculater area of a rectangle.
/*
#include<stdio.h>
int main(){

    int =  width,lenth,result;
    
    printf("Enter the value of width in cm: ");
    scanf("%d",&width);

    printf("Enter the value of lenth in cm:");
    scanf("%d",&lenth);

    result = width * lenth;
    
    printf("The area of recangle: %d cm",result);

    return 0;
}
*/

// calculate the are OF A CIRCLE AND MODIFY THE SAME PROGRAM TO CALCULATE THE  volume of a cylinder given its radius and height.

#include<stdio.h>
int main()
{
    float area,radius,volume,height;
    float PI = 3.14;
 
    printf("Enter the value of radius: ");
    scanf("%f",&radius);
    
    printf("Enter the value of height: ");
    scanf("%f",&height);
    
    area   = PI * radius * radius;
    volume = PI * radius * radius * height;

    printf("Area of circule : %f \n",area);
    printf("Volume of cylinder: %f \n",volume);

    return 0;

}
/*#include<stdio.h>
  
int main(){    //
    int a = 4;
    float b = 8.5;
    char c ='U';
    int d = 45;


    printf("The Value of a is %d \n",a);
    printf("The value of b is %f \n", b);
    printf("The Value of b is %c \n",c);
    printf("Sum of a and d is %d \n",a + d);
    printf("hello c ");
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("The sum of a and b is %d", a + b);
    return 0;

}
// find LCM of two number.
       
#include<stdio.h>
int main()
{
    int number1,number2,result;
    printf("Enter the two number: ");
    scanf("%d%d",&number1,&number2);
    

    for ( result = number1>number2? number1:number2; result < number1 * number2 ; result++)
    {
        if(result%number1 == 0 && result% number2 == 0)
            break;
    }

    printf("LCM is %d\n",result);

    return 0;
    
}
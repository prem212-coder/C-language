// find maximum between tow number

#include<stdio.h>
int main()
{
    int numberone, numbertwo;
    
    printf("Enter number 1 : ");
    scanf("%d", &numberone);

    printf("Enter the number 2 :");
    scanf("%d", &numbertwo);

    if(numberone > numbertwo){
        printf("  Number 1 is greater: %d",numberone);
    }

    else{
        printf("  Number 2 is greater :%d " ,numbertwo);
    }

    return 0;
}
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    if((ch >= 'A') && (ch <= 'Z')){
        printf("The charecter is alphabet");
    }

    else{
        printf("The charecter is not alphabet please enter the alphabet character");
    }

    return 0;
}
#include<stdio.h>
int main()
{
    
    char ch;

    printf("Enter the character: ");
    scanf("%c",&ch);

    if((ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z')){
        if(ch == 'a' || ch == 'A' || ch == 'E' || ch == 'e' || ch == 'i' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'u'){
        printf("%c Character is vowel.\n",ch);
        }
        else{
            printf("%c is a consonant.\n",ch);
        }
    }

    else{
        printf("%c character neither a vowel nor consonant.\n",ch);
    }

    return 0;

}
// write a program using function to print thr following pattern
#include<stdio.h>
void pattern(int n);

int main(){
    int n = 4;
    pattern(n);
    return 0;
}

void pattern(int n){
     if (n==1){
        printf("*\n");
        return;
     }
    pattern(n-1);
    for (int i = 0; i <(2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
}
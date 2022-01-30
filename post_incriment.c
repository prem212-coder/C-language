#include<stdio.h>
int main(){
    int a = 10,b = 15,x;

    x =(a<b)?++a:++b;
    printf("x=%d a=%d b=%d",x,a,b);

    return 0;
}
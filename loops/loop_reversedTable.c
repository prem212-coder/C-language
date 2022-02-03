#include<stdio.h>
int main(){

    int i,tabel,n;
    printf("enter the number: ");
    scanf("%d",&n);

    for(i = 10; i >= 1; i--){
        tabel = i * n;
        printf("%d\n",tabel);
    }
}
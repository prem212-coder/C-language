/*
write a program to print multiplication table of a given number n.
*/

#include<stdio.h>

int main()
{
    int tabel,n,i = 1;
    printf("Entert the number which you want print table: ");
    scanf("%d",&n);
  while(i<=10){
     tabel = i * n;
     printf("%d\n",tabel);
     i++;
  }
}
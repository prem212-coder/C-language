// write a recursive function to calsulate the sum of first n natural numbers

#include<stdio.h>
int sumOfn(int n);

int main(){
    int s,n;
    printf("Enter the number for n: ");
    scanf("%d",&n);
    s = sumOfn(n);
    printf("sum of n natural numbers : %d",s);
 
}
int sumOfn(int n){
    
    if (n == 1)
      return 1;
    else
       return n + sumOfn(n - 1);
}
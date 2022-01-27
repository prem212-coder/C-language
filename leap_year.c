/*

*/

#include<stdio.h>

int main(){
 
  int year;

  printf("Enter year: ");
  scanf("%d",&year);

  if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0)))
  {
      printf("%d this year is leap year: ",year);
  }
  else{
      printf("%d is not a leap years.",year);
  }


}
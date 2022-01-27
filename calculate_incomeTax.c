/* calculate income tax paid by an employe to the goverment as per the salse mentioned below:

income slab               tax
2.5L - 5.0L               5%
5.0L - 10.0L              20%
above 10.0L               30%

note that there is no tax below 2.5L take income amount as an input from the user.

*/

#include<stdio.h>

int main(){
        
    int income,total;
    
    printf("Enter the income amount:");
    scanf("%d",&income);

    if(income < 250000){
    printf("No tax implement on income because it's less then 2.5 L ");
    }
    else if (income <= 500000 )
    {
    total =income *  5/100;
    printf("Tax apply on income is :%d",total);
    }
    else if(income <=1000000){
    total = income * 20/100;
    printf("Tax apply on income is : %d",total);
    }
    else if(income >1000000){
    total = income * 30/100;
    printf("Tax apply on income is: %d",total);
    }
    else{
        printf("you give wrong input ");
    }
    return 0;
}
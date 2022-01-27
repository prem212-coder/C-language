/* write a program to find out whether a student is pass or fail, if it requires total 40% and at least 33% in each subject to pass assume 3 subjects and take marks as an input from the user.
*/

#include<stdio.h>

int main()
{
    int math,physics,chemistry;

    printf("Enter the mask of math\n");
    scanf("%d",&math);

    printf("Enter the mask of physics:\n");
    scanf("%d",&physics);

    printf("Enter the mask of chemistry:\n");
    scanf("%d",&chemistry);

   float total = (math + physics + chemistry)/3;
    if((total < 40 ) || (math < 33) || (physics < 33) || (chemistry)){
        printf("student is fail because it score less : %f",total);
    }

    else{
        printf("student is pass it score: %f",total);
    }
    return 0;
}
#include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    goodMorning();

    return 0;
}

void goodMorning(){
    printf("Good Morning prem\n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Good Afternoon prem\n");
    goodNight();
}

void goodNight(){
    printf("Good Noght\n");
}
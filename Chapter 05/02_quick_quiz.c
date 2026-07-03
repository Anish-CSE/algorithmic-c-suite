#include<stdio.h>

void good_morning();
void good_afternoon();
void good_evening();

void good_morning(){
    printf("good morning\n");   /*always write what is given in the question,
      don't change the upper to lowercase or vice versa,marks can be deducted*/
}
void good_afternoon(){
    printf("good afternoon\n");
}
void good_evening(){
    printf("good evening\n");
}

int main(){
    good_morning();
    good_afternoon();
    good_evening();
    return 0;
}
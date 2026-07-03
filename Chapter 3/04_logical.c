#include <stdio.h>

int main()
{
    int a = 1;  //Think 0 as False and 1 as True , it will be easier for you to judge &&,||
    int b = 1;  // think && as greater than equality and || as greater equality just as in maths
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);
    printf("The value of not(a) is %d", !a); // !a is symbol like thing for not()
     // not(a) just opposite the value stated like 0 becomes 1 and 1 becomes 0

     if(a && b){
     printf("both are true\n");
     }
     // above one and buttom ones are same but different way of writting
     if(a){
        if(b){
            printf("both are true");
        }
     }
    return 0;
}
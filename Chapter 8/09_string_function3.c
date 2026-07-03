#include <stdio.h>

int main(){
    int a = strcmp("far", "joke"); // gives a negative value as according to dictonary far comes 1st
            // actually give +ve or -ve value according to ASCII order value
    printf("%d\n", a); //strcmp compare given words and give +ve or -ve value according to dictonary
    int b = strcmp("far", "ajoke"); //gives a positive value as according to dictonary ajoke comes 1st
    printf("%d", b);
    return 0;
}
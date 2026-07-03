#include <stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("You entered 1\n");
        break; // if break is not there then switch will print all the remains after correct one
        case 2:
        printf("You entered 2\n");
        break; // break here do only print this statement only after finds it correct 
        case 3:
        printf("You entered 3\n");
        break; // after finding the correct one it will terminate the switch case.
        case 4:
        printf("You entered 4\n");
        break;
        default:
        printf("Nothing matched");
        break;
    }
    return 0;
}
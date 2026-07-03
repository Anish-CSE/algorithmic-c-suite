#include <stdio.h>

int main(){
    char st[4];
    scanf("%s", st); /*  here &st not need to write as st is a array so it
                    automatically alotted st[0] as st over here and input will be in it only*/
    printf("%s", st);
    return 0;
}
#include <stdio.h>

int main(){
    char str[6];
    //scanf("%s", str); // other part of question
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]); /* when we give input and press enter, enter button
                                  also get counted so we use fflush() */
        fflush(stdin); // fflush cutts the enter button count
    }
    str[5] = '\0';
    printf("%s", str);
    
    return 0;
}
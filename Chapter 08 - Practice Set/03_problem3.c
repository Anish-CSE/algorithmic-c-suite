#include <stdio.h>

int strlen( char str[]){
    int i=0, count;
    char c= str[i];
    while(c!='\0'){
        c = str[i];
        i++;
    }
    count = i-1;
    return count;
}
int main(){
    char str[] = "Harry"; /* if put replace "Harry" with "Hal" we get 3 as output, "44444"
                             we get 5, "Harry bhai" we gets 10 as output here space also counted*/
    printf("%d", strlen(str));
    return 0;
}

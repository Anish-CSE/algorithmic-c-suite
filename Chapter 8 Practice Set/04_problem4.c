#include <stdio.h>

 char* slice(char str[], int m, int n){
    int i=0, count;
    char *ptr1= &str[m];
    char *ptr2= &str[n];
    str = ptr1;
    str[n]= '\0';
    return str;
}
int main(){
    char str[] = "Harry bhai"; /* if put replace "Harry" with "Hal" we get 3 as output, "44444"
                             we get 5, "Harry bhai" we gets 10 as output here space also counted*/
    printf("%s", slice(str, 1, 7)); // we tell st to start printing from st[1] till st[7]
    return 0;
}
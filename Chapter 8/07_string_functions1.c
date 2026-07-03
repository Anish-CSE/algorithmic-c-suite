#include <stdio.h>
#include<string.h>

int main(){
char st[]= "Anish";
//printf("%d", strlen(st)); //strlen counts the number of alphabets we use exluding the null character    

char target[30];
strcpy(target, st); // strcpy copy the string 
printf("%s %s", st, target);
return 0;
}
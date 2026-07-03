#include <stdio.h>
#include<string.h>

int main(){
char st[]= "Anish";
//printf("%d", strlen(st)); //strlen counts the number of alphabets we use exluding the null character    

// char target[30];
// strcpy(target, st); // strcpy copy the string 
// printf("%s %s", st, target);

char s1[56]= "Anish";
char s2[56]= " Aryan"; // leave space to look nice or else it will look like AnishAryan , OK
strcat(s1, s2); // strcat bring two or more character together 
printf("%s", s1);
return 0;
}
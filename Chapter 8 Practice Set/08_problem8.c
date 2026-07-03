#include <stdio.h>
#include<string.h>

int main(){
    char c='b';
    int count=0;
char str[] = "Bbf!sbkb!kj!cb{{b!cb{j!lj!ob!cb{jjj - Aae raja ji bazza bazi ki na baziii";
for(int i=0;i<strlen(str);i++){
    if(str[i] == c){
        count++;
    }
}

printf("%d", count); // here this will tell us that how many b is present in this written thing
    return 0;
}
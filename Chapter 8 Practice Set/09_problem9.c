#include <stdio.h>
#include<string.h>

int main(){
    char c='b';
    int contain=0;
char str[] = "Bbf!sbkb!kj!cb{{b!cb{j!lj!ob!cb{jjj - Aae raja ji bazza bazi ki na baziii";
for(int i=0;i<strlen(str);i++){
    if(str[i] == c){
        contain = 1;
        break;;
    }
}
if(contain){
    printf("Yes it contain \n");
}
else{
    printf("Does not contain \n");
    
}
    return 0;
}
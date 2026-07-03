#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("harry.txt", "a"); // here "a" mode don't empty the file just add/store the new given value just after the file values
     // "w" mode will empty the file and then store the given value, in this case 432
    int num = 432;
fprintf(fptr, "%d", num); //so you will see 432432 first three 432 is already present then using 'a mode 432 just added after the first 432
fclose(fptr);
    return 0;
}
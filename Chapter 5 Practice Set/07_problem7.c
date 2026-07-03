#include <stdio.h>

int main(){
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        // This loop runs from 0 to 2
        // if i = 0 ---> print 1 star
        // if i = 1 ---> print 2 stars
        // if i = 2 ---> print 5 stars
        // no_of_stars = (2*i+1) same formula as odd no. representation is 2n+1.
        
        // This for loop prints (2*i+1) stars
        for (int j = 0; j < 2*i+1; j++) 
        {
           printf("*");         /* code */
        }
        printf("\n");  // This printf prints a new line,so we use
        
    }
    
    return 0;
}
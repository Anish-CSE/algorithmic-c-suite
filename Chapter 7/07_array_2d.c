#include <stdio.h>

int main(){
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 2; j++)
       {
        printf("Enter the value of arr[%d][%d]", i, j);
        scanf("%d", &arr[i][j]); 
       }
    }
    
    for (int i = 0; i < 3; i++) // this is running for rows
{
   for (int j = 0; j < 2; j++)  // this is running for columns
   {
    printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
   }
}
 // if want to print as it is in manual so,
 /* for (int i = 0; i < 3; i++)
{
   for (int j = 0; j < 2; j++)
   {
    printf("%d", arr[i][j]);
   }
    printf("\n"); 
}   */
return 0;
}
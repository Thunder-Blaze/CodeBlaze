#include <stdio.h>

/*
Print multiplication table of a number entered by user in the following form
Input:
Enter the number you want multiplication table of :
5

Output:
5 x 1 = 5
.
.
5 x 10 = 50
*/

int main(){
    int num;
    printf("Enter the number you want multiplication table of : ");
    scanf("%d",&num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n",num,i,i*num);
        // printf("",i);
        // printf("",i*num);
    };
    
    return 0;
}
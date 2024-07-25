#include <stdio.h>
#include <stdlib.h>

int main(){
    // // Use of malloc()
    // int* ptr;
    // int n;
    
    // printf("Enter the size of the array you want to create - ");
    // scanf("%d", &n);

    // ptr = (int*) malloc(n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array - ",i+1);
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at Position %d of this array - %d\n",i+1,ptr[i]);
    // }









    // Use of calloc()
    int* ptr;
    int n;
    
    printf("Enter the size of the array you want to create - ");
    scanf("%d", &n);

    ptr = (int*) calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array - ",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at Position %d of this array - %d\n",i+1,ptr[i]);
    }









    // Use of Realloc()
    printf("Enter the new size of the array you want to create - ");
    scanf("%d", &n);

    ptr = (int*) realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array - ",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at Position %d of this array - %d\n",i+1,ptr[i]);
    }
    






    // Use of free()
    free(ptr);

    
    return 0;
}
#include <stdio.h>


// // Part of Q5
//
// int revarr(int* arr, int n){
//     int temp;
//     for (int i = 0; i < (n/2); i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
// };



int main(){


// Q1. Create an array of 10 numbers. Verify using pointer arithmetic that
//     (ptr+2) points at 3rd element where ptr is a pointer pointing to
//     the first element of the array
//
    // int arr[] = {1,2,3,4,5,6,7,8,9,0};
    // int* ptr = arr;
    // printf("The 3rd Element is %d",*(ptr+2));









// Q2. If S[3] is a 1-D array of integers then *(S+3) refers to the 3rd elemenrt
//      (1) True
//      (2) False
//      (3) Depends
//
// Ans - False, *(S+2) refers to the 3rd element









// Q3. Write a program to create an array of 10 integers and store multiplication
//     table of 5 in it
//
    // int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     arr[i]=5*(i+1);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    








// Q4. Repeat Problem 3 for a general input provided by user using scanf
//
    // int a;
    // printf("Type the number whoose Table you wanna Print - ");
    // scanf("%d",&a);
    // int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     arr[i]=a*(i+1);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }









// Q5. Write a program containing a function which reverses the array passed to it
//
    // int arr[] = {1,2,3,4,5};
    // int* ptr = arr;
    // int n = (sizeof(arr)/sizeof(int));
    // revarr(ptr,n);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    








// Q6. Write a program containing functions which counts the number of 
//     positive integers in a array
//
    // int arr[] = {1,23,-2,-99,6,2,-5};
    // int count = 0;
    // printf("Array => ");
    // for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    // {
    //     if (arr[i]>0)
    //     {
    //         count++;
    //     }
    // }
    // printf("\nThere are %d positive numbers in the Array",count);
    










// Q7. Create an array of size 3x10 containing multiplication tables of the
//     number  ,  and 9 respectively
//
    // int arr[3][10];
    // int mul[] = {2,7,9};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 10; j++) {
    //         arr[i][j] = mul[i]*(j+1);
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }









// Q8. Repeat Q7 with user input
//
    // int n1, n2, n3;
    // printf("Input num 1 => ");
    // scanf("%d",&n1);
    // printf("Input num 2 => ");
    // scanf("%d",&n2);
    // printf("Input num 3 => ");
    // scanf("%d",&n3);
    // int arr[3][10];
    // int mul[] = {n1,n2,n3};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 10; j++) {
    //         arr[i][j] = mul[i]*(j+1);
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    








// Q9. Create a 3D array and print the address of its elements in 
//     increasing order
//
    // int arrr[2][2][2];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         for (int k = 0; k < 2; k++)
    //         {
    //             printf("%u\n",&arrr[i][j][k]);
    //         }
    //     }
    // }




    

    return 0;
}
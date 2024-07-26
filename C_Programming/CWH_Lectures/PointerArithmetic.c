#include <stdio.h>

int main(){
    // int a = 34;
    // int* ptra = &a;
    // printf("%d\n",ptra);
    // printf("%d\n",ptra+1);

    // when n is added to address, it adds n times size of the data_type
    // size depends on architecture of the cpu

    //we can't do "arr++" because arr is constant
    //but we can do =>
    //int* arrayptr = arr
    //arrayptr++;
    //printf("%d",arrayptr)


    int arr[] = {12,3,4,5,4,2};
    printf("Value at Position 3 (4th Element) of the Array is %d\n",arr[3]);

    printf("Address of Position 0 (1st element) of Array is %d\n",&arr[0]);
    printf("Address of Position 0 (1st element) of Array is %d\n",arr);

    printf("Address of Position 1 (2st element) of Array is %d\n",&arr[1]);
    printf("Address of Position 1 (2st element) of Array is %d\n",arr+1);

    printf("Value at Address of Position 0 (1st element) of Array is %d\n",arr[0]);
    printf("Value at Address of Position 0 (1st element) of Array is %d\n",*(&arr[0]));
    printf("Value at Address of Position 0 (1st element) of Array is %d\n",*(arr));

    printf("Value at Address of Position 0 (1st element) of Array is %d\n",arr[1]);
    printf("Value at Address of Position 1 (2st element) of Array is %d\n",*(&arr[1]));
    printf("Value at Address of Position 1 (2st element) of Array is %d\n",*(arr+1));

    return 0;
}
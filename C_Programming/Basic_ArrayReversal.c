#include <stdio.h>

// reverse an array by switching last and first element and so on

void ArrayRev(int arr[], int arrlen){
    for (int i = 0; i < ((arrlen)/2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[arrlen-1-i];
        arr[arrlen-1-i] = temp;
    }
}

void prntarr(int arr[], int arrlen){
    printf("{");
    for (int i = 0; i < arrlen; i++)
    {
        printf("%d,", arr[i]);
    };
    printf("}\n");
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int arrlen = (sizeof(arr)/sizeof(arr[0]));
    printf("Old Array - ");
    prntarr(arr, arrlen);
    ArrayRev(arr, arrlen);
    printf("New Array - ");
    prntarr(arr, arrlen);
    return 0;
}
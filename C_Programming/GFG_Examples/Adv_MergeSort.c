#include <stdio.h>

void MergeSort(int A[], int p, int r);
void merge(int arr[], int p, int q, int r);

// |> Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {
    // |> Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];
    for (int i = 0; i < n1; i++){
        L[i] = arr[p + i];
    }
    for (int j = 0; j < n2; j++){
        M[j] = arr[q + 1 + j];
    }
    // |> Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    // |> Until we reach either end of either L or M, pick larger among
    // |> elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = M[j++];
        }
    }
    // |> When we run out of elements in either L or M,
    // |> pick up the remaining elements and put in A[p..r]
    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = M[j++];
    }
}

void MergeSort(int A[], int p, int r){
    if (p >= r){
        return;
    }
    int q = (p+r)/2;
    MergeSort(A, p, q);
    MergeSort(A, q+1, r);
    merge(A, p, q, r);
}

int main(){
    int arr[] = {2,7,45,76,32,12,55};
    MergeSort(arr, 0, 6);
    for (int i = 0; i < 7; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
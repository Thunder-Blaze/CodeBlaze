#include <stdio.h>

// void func1(int array[]){
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The value of object %d is %d\n",i+1,array[i]);
//     }
// }

// void func2(int *ptr){
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The value of object %d is %d\n",i+1,*(ptr+i)); // *(ptr+i) or ptr[i]
//     }
// }

void func3(int array[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of object at %d, %d is %d\n", i, j, array[i][j]);
        }
        
    }   
}

int main(){
    int arr[][2] = {{1,2},{0,3}};
    // func1(arr);
    func3(arr);
    // printf("%d",arr[0]);
    return 0;
}
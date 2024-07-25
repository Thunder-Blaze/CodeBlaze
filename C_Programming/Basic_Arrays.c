#include <stdio.h>

int main(){

    // int marks[4];
    // int marks = {3,45,66};


    // marks[0] = 34;
    // printf("Marks of 1st Student is %d\n",marks[0]);
    // marks[0] = 4;
    // printf("Marks of 1st Student is %d\n",marks[0]);

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Type the marks of Student %d - ",i+1);
    //     scanf("%d",&marks[i]);
    // };

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The marks of Student %d is %d\n", i+1, marks[i]);
    // };

    int marks[2][4] = {{12,34,45,5},{1,67,4,36}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Element (%d,%d) of Array is %d\n",i,j,marks[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
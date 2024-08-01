
#include <stdio.h>

int main(){
    // int mato;
    // printf("Matrix Determinant Calculator\n\n");
    // printf("Square Matrix Order - ");
    // scanf("%d",&mato);
    // int mat[mato][mato];
    // for (int i=0; i < mato; i++){
    //     for(int j=0; j < mato; j++){
    //         printf("Element (%d,%d) - ",i+1,j+1);
    //         scanf("%d",&mat[i][j]);
    //     }
    // }
    // printf("\n");
    // printf("The Determinant of the Matrix is");





    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // int x;
    // int y;
    // int det = mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1]) - mat[0][1]*(mat[1][0]*mat[2][2]-mat[1][2]*mat[2][0]) + mat[0][2]*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0]);

    // a1 b1 c1
    // a2 b2 c2
    // a3 b3 c3

    int det = mat[0][0]*mat[1][1]*mat[2][2]    // a1*b2*c3
            - mat[0][0]*mat[1][2]*mat[2][1]    // a1*b3*c2
            - mat[0][1]*mat[1][0]*mat[2][2]    // b1*a2*c3
            + mat[0][1]*mat[1][2]*mat[2][0]    // b1*a3*c2
            + mat[0][2]*mat[1][0]*mat[2][1]    // c1*a2*b3
            - mat[0][2]*mat[1][1]*mat[2][0];   // c1*a3*b2
    
    // int pro = 1;
    // int sum = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         pro*=mat[i][j];
    //     }
    //     sum+=pro;
    //     pro =1;
    // }
    // printf("%d",sum);

    // for (int i = 0; i < 3; i++)
    // {
    //     x = 1-2*(i%2);
    //     if (i!=2)
    //     {
    //         y=x*mat[2][2]*mat[3][3];
    //     }
        
    // }
    //  mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1]) - mat[0][1]*(mat[1][2]*mat[2][0]-mat[2][2]*mat[1][0]) + mat[0][2]*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0])
    //
    
    printf("The Determinant of the Matrix is %d",det);
}

// #include <stdio.h>

// int main(){
//     // int mato;
//     // printf("Matrix Determinant Calculator\n\n");
//     // printf("Square Matrix Order - ");
//     // scanf("%d",&mato);
//     // int mat[mato][mato];
//     // for (int i=0; i < mato; i++){
//     //     for(int j=0; j < mato; j++){
//     //         printf("Element (%d,%d) - ",i+1,j+1);
//     //         scanf("%d",&mat[i][j]);
//     //     }
//     // }
//     // printf("\n");
//     // printf("The Determinant of the Matrix is");





//     int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     // int x;
//     // int y;
//     // int det = mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1]) - mat[0][1]*(mat[1][0]*mat[2][2]-mat[1][2]*mat[2][0]) + mat[0][2]*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0]);

//     // a1 b1 c1
//     // a2 b2 c2
//     // a3 b3 c3

//     int det = mat[0][0]*mat[1][1]*mat[2][2]    // a1*b2*c3
//             - mat[0][0]*mat[1][2]*mat[2][1]    // a1*b3*c2
//             - mat[0][1]*mat[1][0]*mat[2][2]    // b1*a2*c3
//             + mat[0][1]*mat[1][2]*mat[2][0]    // b1*a3*c2
//             + mat[0][2]*mat[1][0]*mat[2][1]    // c1*a2*b3
//             - mat[0][2]*mat[1][1]*mat[2][0];   // c1*a3*b2
    
//     // int pro = 1;
//     // int sum = 0;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         pro*=mat[i][j];
//     //     }
//     //     sum+=pro;
//     //     pro =1;
//     // }
//     // printf("%d",sum);

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     x = 1-2*(i%2);
//     //     if (i!=2)
//     //     {
//     //         y=x*mat[2][2]*mat[3][3];
//     //     }
        
//     // }
//     //  mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1]) - mat[0][1]*(mat[1][2]*mat[2][0]-mat[2][2]*mat[1][0]) + mat[0][2]*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0])
//     //
    
//     printf("The Determinant of the Matrix is %d",det);
// }
























// Code from StackOverflow

#include <stdio.h>
#include <stdlib.h>

int m,n; // original matrix dimensions

int det(int B[m][n]);

int main() {
    int determinant;
    register int row,column;

    printf("Enter rows and columns\n");
    scanf("%d%d",&m,&n);
    
    int A[m][n];

    printf("Enter matrix elements\n");

    for(row = 0; row < m; row++)
        for(column = 0; column < n; column++)
            scanf("%d",&A[row][column]);
            
    determinant = det(A);

    printf("determinant = %d \n",determinant);

    return 0;
}

int det(int B[m][n]) {
    int row_size = m;
    int column_size = n;

    if (row_size != column_size) {
        printf("DimensionError: Operation Not Permitted \n");
        exit(1);
    }

    else if (row_size == 1)
        return (B[0][0]);

    else if (row_size == 2)
        return (B[0][0]*B[1][1] - B[1][0]*B[0][1]);

    else {
        int minor[row_size-1][column_size-1];
        int row_minor, column_minor;
        int firstrow_columnindex;
        int sum = 0;

        register int row,column;

        // exclude first row and current column
        for(firstrow_columnindex = 0; firstrow_columnindex < row_size;
                firstrow_columnindex++) {

            row_minor = 0;

            for(row = 1; row < row_size; row++) {

                column_minor = 0;

                for(column = 0; column < column_size; column++) {
                    if (column == firstrow_columnindex)
                        continue;
                    else
                        minor[row_minor][column_minor] = B[row][column];

                    column_minor++;
                }

                row_minor++;
            }

            m = row_minor;
            n = column_minor;

            if (firstrow_columnindex % 2 == 0)
                sum += B[0][firstrow_columnindex] * det(minor);
            else
                sum -= B[0][firstrow_columnindex] * det(minor);

        }

        return sum;

    }
}
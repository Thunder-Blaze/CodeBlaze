
#include <stdio.h>

int main(){
    int mat1r;
    int mat1c;
    int mat2r;
    int mat2c;
    printf("Matrix Multiplication Program\n\n");
    printf("Matrix 1 Rows - ");
    scanf("%d",&mat1r);
    printf("Matrix 1 Columns - ");
    scanf("%d",&mat1c);
    int mat1[mat1r][mat1c];
    for (int i=0; i < mat1r; i++){
        for(int j=0; j < mat1c; j++){
            printf("Element (%d,%d) - ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");
    printf("Matrix 2 Rows - ");
    scanf("%d",&mat2r);
    printf("Matrix 2 Columns - ");
    scanf("%d",&mat2c);
    int mat2[mat2r][mat2c];
    for (int k=0; k < mat2r; k++){
        for(int l=0; l < mat2c; l++){
            printf("Element (%d,%d) - ",k+1,l+1);
            scanf("%d",&mat2[k][l]);
        }
    }
    // char* mat1 = matrixinput(mat1r,mat1c);
    printf("\nMatrix 1 - %dx%d\n",mat1r,mat1c);
    for (int i=0; i < mat1r; i++){
        for(int j=0; j < mat1c; j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix 2 - %dx%d\n",mat2r,mat2c);
    for (int k=0; k < mat2r; k++){
        for(int l=0; l < mat2c; l++){
            printf("%d ",mat2[k][l]);
        }
        printf("\n");
    }
    if (mat1c==mat2r){
        // printf("Multiplied Matrix\n");
        int matf[mat1r][mat2c];

        // 1 2 3       1 2              1+6+15   2+8+18
        // 4 5 6       3 4    =====     4+15+30  8+20+36
        //             5 6    

        // 1 2 3       1              1+4+9
        // 4 5 6       2    =====     4+10+18
        //             3              

        for (int i = 0; i < mat1r; i++)
        {
            for (int k = 0; k < mat2c; k++)
            {
                int temp=0;
                for (int j = 0; j < mat1c; j++)
                {
                    temp += mat1[i][j]*mat2[j][k];
                }
                // printf("%d ",temp);
                matf[i][k] = temp;
            }
            // printf("\n");
        }
        printf("\nMultiplied Matrix - %dx%d\n",mat1r,mat2c);
        for (int i=0; i < mat1r; i++){
            for(int j=0; j < mat2c; j++){
                printf("%d ",matf[i][j]);
            }
            printf("\n");
        }
        
        // for (int i=0,k=0; i < mat1c, k < mat2c; i++, k++){
        //     for(int j=0, l=0; j < mat1r, l < mat2r; j++, l++){
        //         printf("%d ",mat1[i][j]+mat2[k][l]);
        //     }
        // }
    } else {
        printf("Matrix Multiplication Not Possible");
    };
    // char mat2[mat2r][mat2c] = matrixinput(mat2r,mat2c);
    
}
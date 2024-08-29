#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[5][5];
    int x;
    int y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&n[i][j]);
            if (n[i][j]==1){
                x = i;
                y = j;
            }
        }
    }
    int count = ((y>2)?(y-2):(2-y)) + ((x>2)?(x-2):(2-x));
    printf("%d", count);
    return 0;
}
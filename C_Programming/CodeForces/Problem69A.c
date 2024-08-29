#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    scanf("%d",&n);
    int x[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    int sum[3];
    for (int i = 0; i < 3; i++){
        sum[i]=0;
        for (int j = 0; j < n; j++)
        {
            sum[i] += x[j][i];
        }
    }
    if ((sum[0]==0) && (sum[1]==0) && (sum[2]==0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    

    return 0;
}
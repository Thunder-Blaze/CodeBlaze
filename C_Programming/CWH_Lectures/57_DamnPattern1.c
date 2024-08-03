#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    // int x=2*n-1;
    // for (int i = 0; i < x; i++)
    // {
    //     for (int i = 0; i < x; i++)
    //     {
    //         printf("%d ",n);
            
    //     }
    //     printf("\n");
    // }
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        int z = n;
        for (int j = i; j; j--)
        {
            printf("%d ",z);
            z--;
            count++;
        }
        z++;
        while (count!=n)
        {
            printf("%d ",z);
            count++;
        }
        // z = n;
        while (count!=i)
        {
            printf("%d ",z);
            count--;
        }
        z++;
        for (int j = i-1; j; j--)
        {
            printf("%d ",z);
            z++;
            count--;
        }
        printf("\n");
    }
    for (int i = n-1; i >= 1; i--)
    {
        int count = 0;
        int z = n;
        for (int j = i; j; j--)
        {
            printf("%d ",z);
            z--;
            count++;
        }
        z++;
        while (count!=n)
        {
            printf("%d ",z);
            count++;
        }
        // z = n;
        while (count!=i)
        {
            printf("%d ",z);
            count--;
        }
        z++;
        for (int j = i-1; j; j--)
        {
            printf("%d ",z);
            z++;
            count--;
        }
        printf("\n");
    }
    
    
    return 0;
}
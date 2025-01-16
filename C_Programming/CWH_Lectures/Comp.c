#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int t=1;
    // scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int s = 0;
        while(n){
            s+=(n%10);
            n/=10;
        }
        printf("%d\n",s);
    }
}

int main(){
    int t=1;
    // scanf("%d",&t);
    while(t--){
        int a,b;
        int c,d;
        scanf("%d %d",&a,&b);
        scanf("%f %f",&c,&d);
        printf("%d %d\n",a+b,a-b);
        printf("%f %f\n",c+d,c-d);
        return 0;
    }
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    char std[n+1];
    scanf("%s",&std);
    while(t){
        for (int i=0; i<n-1; i++){
            if ((std[i]=='B') && (std[i+1]=='G')){
                std[i]='G';
                std[i+1]='B';
                i++;
            }
        }
        t--;
    }
    printf("%s\n",&std);
    return 0;
}
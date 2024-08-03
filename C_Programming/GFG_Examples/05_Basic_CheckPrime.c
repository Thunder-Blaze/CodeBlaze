#include <stdio.h>

int main(){
    int num;
    printf("Enter The Number - ");
    scanf("%d",&num);
    if (num==0 || num==1) {
        printf("The Number is Neither Prime nor Composite");
    } else {
        for (int i = 2; i <= num/2; i++) {
            if (num%i==0) {
                num=1;
                break;
            }
        }
        if (num==1) {
            printf("The Number is Composite");
        } else {
            printf("The Number is Prime");
        }
    }
    
    return 0;
}
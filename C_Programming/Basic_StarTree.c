#include <stdio.h>

void StarTree(int num){
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        };
        printf("\n");
    }
}

void ReverseStarTree(int num){
    for (int i = num; i > 0; i--) {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        };
        printf("\n");
    }
}

int main(){
    int choice;
    printf("Choose the Type of Tree\n    1. Star Tree\n    2. Reversed Star Tree\n");
    scanf("%d",&choice);
    if (choice==1) {
        int num;
        printf("Type a Number - ");
        scanf("%d",&num);
        StarTree(num);
    } else if (choice==2) {
        int num;
        printf("Type a Number - ");
        scanf("%d",&num);
        ReverseStarTree(num);
    } else {
        printf("Type Correct Choice -_-");
    }
    return 0;
}
#include <stdio.h>

int main (){
    int age, marks;

    printf("Enter Your Age - ");
    scanf("%d",&age);

    printf("Enter Your Marks - ");
    scanf("%d",&marks);

    switch(age) {
        case 10:
            printf("Age is 10\n");
            switch (marks)
            {
            case 45:
                printf("Your Marks are 45");
                break;
            
            default:
                printf("Your Marks are not 45");
                break;
            }
            break;
        case 18:
            printf("Age is 18");
            break;
        default:
            printf("Age is not 10 or 18");
            break;
    }
    return 0;
}
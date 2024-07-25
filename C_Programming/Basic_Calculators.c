#include <stdio.h>

int main()
{
    int a;
    printf("Print your choice - ");
    scanf("%d",&a);

    if (a==1)
    {
        printf("Area of Square Calculator\n");
        float s;
        printf("Input the Side Length - ");
        scanf("%f",&s);
        printf("Area = %f",s*s);
    }
    else if (a==2)
    {
        printf("Area of Circle Calculator\n");
        float radius;
        printf("Input the Radius - ");
        scanf("%f",&radius);
        printf("Area = %f",22*radius*radius/7);
    };
    
    return 0;
}
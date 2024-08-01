#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[30];
    int marks;
};


int main(){
    struct Student Class_10[3];
    for (int i = 0; i < 3; i++)
    {
        Class_10[i].id = i+1;
        printf("Student %d Details - \nId - %d\nName - ",i+1,Class_10[i].id);
        char a[30];
        if (i>0)
        {
            getchar();
        }
        scanf("%s",&a);
        strcpy(Class_10[i].name,a);
        printf("Marks - ");
        int b;
        scanf("%d",&b);
        Class_10[i].marks = b;
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d - %s - %d\n",Class_10[i].id,Class_10[i].name,Class_10[i].marks);
    }
    
    

    return 0;
}
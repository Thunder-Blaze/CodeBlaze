#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    char name[34];
    int marks;
    char fav_char;
};

int main(){
    union Student s1;
    s1.id = 1;
    s1.marks = 99;
    s1.fav_char = 's';
    strcpy(s1.name,"Blaze");
    // Only the last defined term remains intact, others get corrupted
    // We can only use one member of the union at a time for a particular variable (Here s1)
    printf("The id is %d\n",s1.id);
    printf("The name is %s\n",s1.name);
    printf("The marks is %d\n",s1.marks);
    printf("The favourite character is %c\n",s1.fav_char);
    
    return 0;
}
#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[33];
};

void printStudent(struct Student var){
    printf("%s's Id is %d\n",var.name,var.id);
    printf("%s's Marks is %d\n",var.name,var.marks);
    printf("%s's Favourite Character is %c\n",var.name,var.fav_char);
}

// New data type named Student has been created


int main(){
    struct Student harry, ravi, shyam;
    strcpy(harry.name, "Harry");
    strcpy(shyam.name, "Shyam");
    strcpy(ravi.name, "Ravi");
    harry.id = 1;
    ravi.id = 2;
    shyam.id = 3;
    harry.marks = 466;
    ravi.marks = 122;
    shyam.marks = 132;
    harry.fav_char = 'p';
    ravi.fav_char = 'y';
    shyam.fav_char = 't';
    printStudent(harry);
    printStudent(ravi);
    printStudent(shyam);
    // strcpy(harry.name, "Nothing");
    // printf("Harry got %d marks\n",harry.marks);
    // printf("Harry's name is : %s\n",harry.name);
    return 0;
}
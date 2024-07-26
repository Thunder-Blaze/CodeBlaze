#include <stdio.h>
#include <stdlib.h>

/*
ABC Pvt Ltd. manages employee records of other companies
Employee id can be of any length and it can contain any character
for 3 employee, you have to take length of employee id as input in
a length integer variable then you have to take employee id as an
input and display it on screen
Store the employee id in a character array which is allocated dynamically

You have to create only one character array dynamically

Employee 1:
Enter number of characters in your eID
45
dynamically allocate the array
take input from the user
*/

int main(){
    int length;
    char *ptr;
    for (int i = 0; i < 3; i++)
    {
        printf("\n\nEmployee %d:\nEnter no of characters in your eID - ",i+1);
        scanf("%d",&length);
        ptr = (char*) malloc((length+1)*sizeof(char));
        printf("Input your eID - ");
        scanf("%s", ptr);
        printf("Your Employee Id is %s", ptr);
        free(ptr);
    }
    return 0;
}

// When we take 2 char inputs simultaneously
// the 2nd input is skipped
// to prevent that use getchar() after taking char input
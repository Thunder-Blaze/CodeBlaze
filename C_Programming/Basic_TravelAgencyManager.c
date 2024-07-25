/*
You manage a travel agency and you want your n drivers to
input their following details:
1. Name
2. Driving Lisence No
3. Route
4. Kms
Your program should be able to take n as input and then your drivers
will start inputting thier details one by one

at last
Your program should print details of drivers in a beautiful fashion
*/

// Haven't Been Able to Solve it how I want

#include <stdio.h>
#include <string.h>

struct Driver {
    char name[33];
    char licence[17];
    char route[33];
    int kms;
};

struct Driver Driver1, Driver2, Driver3;
// Defined it globally so that I can use it in diff functions

void printOutput(struct Driver Driver, char str[]){
    printf("\n\nPrinting the Details of %s\n",str);
    printf("Name    -   %s\n",Driver.name);
    printf("Licence -   %s\n",Driver.licence);
    printf("Route   -   %s\n",Driver.route);
    printf("Kms     -   %d\n",Driver.kms);
}

void takeInput(struct Driver Driver, char str[]){
    printf("Type the Details of %s\n",str);
    printf("Name - ");
    scanf("%s",&Driver.name);
    printf("Licence - ");
    scanf("%s",&Driver.licence);
    printf("Route - ");
    scanf("%s",&Driver.route);
    printf("Kms Covered - ");
    scanf("%d",&Driver.kms);

    printOutput(Driver, str);

    // int driverno;
    // printf("Input the number of Drivers - ");
    // scanf("%d",driverno);
}

int main(){
    printf("Travel Agency Program\n\n");
    char Driv1[] = "Driver1";
    char Driv2[] = "Driver2";
    char Driv3[] = "Driver3";
    takeInput(Driver1,Driv1);
    // printOutput(Driver1,Driv1);
    return 0;
}
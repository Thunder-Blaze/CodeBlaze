/*
Convert
1. Km to Miles
2. Inches to Foot
3. Cm to Inches
4. Pound to Kgs
5. Inches to Metres
*/

#include <stdio.h>

float kmtomiles(float input){
    return input/1.609;
}
float inchestofoot(float input){
    return input/12;
}
float cmtoinches(float input){
    return input/2.54;
}
float poundtokgs(float input){
    return input/2.205;
}
float inchestometres(float input){
    return input/39.37;
}

int Choose(){
    int choice;
    printf("Unit Converter Program\n\n");
    printf("1. Km to Miles\n");
    printf("2. Inches to Foot\n");
    printf("3. Cm to Inches\n");
    printf("4. Pound to Kgs\n");
    printf("5. Inches to Metres\n");
    printf("6. Quit\n");
    printf("Type your choice - ");
    scanf("%d",&choice);

    float input;
    float output;

    if (choice==1) {
        printf("\nInput in Kms - ");
        scanf("%f",&input);
        output = kmtomiles(input);
        printf("Output in Miles = %.2f\n",output);
        Choose();
    } else if (choice==2) {
        printf("\nInput in Inches - ");
        scanf("%f",&input);
        output = inchestofoot(input);
        printf("Output in Foot = %.2f\n",output);
        Choose();
    } else if (choice==3) {
        printf("\nInput in Cm - ");
        scanf("%f",&input);
        output = cmtoinches(input);
        printf("Output in Inches = %.2f\n",output);
        Choose();
    } else if (choice==4) {
        printf("\nInput in Pound - ");
        scanf("%f",&input);
        output = poundtokgs(input);
        printf("Output in Kgs = %.2f\n",output);
        Choose();
    } else if (choice==5) {
        printf("\nInput in Inches - ");
        scanf("%f",&input);
        output = inchestometres(input);
        printf("Output in Metres = %.2f\n",output);
        Choose();
    } else if (choice==6) {
        return 0;
    } else {
        printf("Please Type a Correct Choice Number\n");
        Choose();
    }
}

int main(){
    Choose();
    return 0;
}
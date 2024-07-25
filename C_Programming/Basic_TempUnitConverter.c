#include <stdio.h>

int main(){
    printf("Temperature Unit Converter\n\n1. Convert °C to °F\n2. Convert °F to °C\n");
    printf("Type your choice - ");

    //°F = °C × (9/5) + 32

    int choice;
    scanf("%d",&choice);
    if (choice == 1) {
        float temp;
        printf("\nType the temperature in °C - ");
        scanf("%f",&temp);
        temp = temp*9.0/5.0 + 32;
        printf("\nTemperature in °F is %f",temp);
    } else if (choice == 2) {
        float temp;
        printf("\nType the temperature in °F - ");
        scanf("%f",&temp);
        temp = (temp - 32)*5.0/9.0;
        printf("\nTemperature in °C is %f",temp);
    } else {
        printf("Please type 1 or 2");
    };
    
    return 0;
}
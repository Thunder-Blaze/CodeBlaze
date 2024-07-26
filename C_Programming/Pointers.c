#include <stdio.h>

int main(){
    int a = 16;
    int* ptra = &a;  // ptra is called pointer to a
    int* ptr2 = NULL;
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*ptra); // %d represent integer
    printf("The value of a in hex is %x\n",a); // Value of a in hex
    printf("The address of a is %x\n",&a);
    printf("The address pointed by ptra is %x\n",ptra);
    printf("The address of pointer to a is %x\n",&ptra); // %x represent hexadecimal or hex
    printf("The address pointed by ptr2 is %x\n",ptr2); //gives 0
    return 0;

    // & represents "address of"
    // * represents "value at this address"
} 
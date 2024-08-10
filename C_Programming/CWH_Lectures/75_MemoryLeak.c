#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, i = 0;
    int * i2;
    while (i<45555)
    {
        printf("Welcome to Anime");
        i2 = malloc(34444*sizeof(int));
        if (i%100==0){
            getchar();
        }
        i++;
        // If the below statement is uncommented, the program will use constant
        // memory else the memory usage of program will keep increasing until
        // the program crashes
        // free(i2);
    }
    
    return 0;
}
#include <stdio.h>

// 'while' loop checks the condition first and then runs
// 'do-while' loop runs first and then checks the condition

int main(){
    int i;
    while (i<10) {
        printf("%d\n",i);
        i += 1;
    };
    
    return 0;
}
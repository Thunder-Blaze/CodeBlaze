#include <stdio.h>

int main(){
    int a = 344;
    float b = 93.2;
    void* ptr;
    // Directly using *ptr will give error
    // because void pointer doesn't have a pre defined
    // data type
    // So, we will access it by typecasting it
    ptr = &a;
    printf("The value of a is %d\n",*((int*)ptr)); //works
    ptr = &b;
    printf("The value of a is %f\n",*((float*)ptr)); //works

    float d=3.7;
    printf("Rounded value of d is %.f\n",d);
    int e=3.7;
    printf("Truncated value of e is %d\n",e);

    // https://youtu.be/aZb0iu4uGwA?t=27176
    // https://youtu.be/aZb0iu4uGwA?t=29599
    // https://www.youtube.com/watch?v=YyJRXPY0Vyg
    // https://www.youtube.com/watch?v=dHlDAhARLxo
    // Video 53
    // https://www.youtube.com/watch?v=H8Lyj2D_cWo
    // https://www.youtube.com/watch?v=gCFkkYZSxOc
    // https://www.youtube.com/watch?v=-uleG_Vecis
    return 0;
}
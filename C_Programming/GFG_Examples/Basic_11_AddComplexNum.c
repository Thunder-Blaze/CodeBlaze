#include <stdio.h>

struct Complex {
    int real;
    int img;
};


void sum(struct Complex a, struct Complex b) {
    printf("The Sum is => %d + %di",(a.real + b.real),(a.img + b.img));
}


int main() {
    struct Complex c1;
    struct Complex c2;
    c1.real = 2;
    c1.img = 8;
    c2.real = 3;
    c2.img = 1;
    printf("Number 1 => %d + %di\n",c1.real,c1.img);
    printf("Number 2 => %d + %di\n",c2.real,c2.img);
    sum(c1,c2);
    return 0;
}
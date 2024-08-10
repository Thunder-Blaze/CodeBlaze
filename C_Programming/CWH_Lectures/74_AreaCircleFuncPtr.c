#include <stdio.h>
#include <math.h>
#define PI 3.14

/*
take x1, y1 and x2, y2 from user using scanf
Edistance is Euclidean Distance
Mdistance is Manhatten Distance
*/

float Edistance(int x1, int y1, int x2, int y2) {
    return ((float) sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
}

float Mdistance(int x1, int y1, int x2, int y2) {
    return ((float) (fabs(x2-x1) + fabs(y2-y1)));
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*fptr)(int,int,int,int)){
    float r = fptr(x1,y1,x2,y2);
    return PI*r*r;
}

int main(){
    float (*ptre)(int,int,int,int);
    ptre = &Edistance;
    float (*ptrm)(int,int,int,int);
    ptrm = &Mdistance;
    int x1,y1,x2,y2;
    printf("Program to find area of circle formed by the distance between two points taken as radius\n\n");
    printf("Type X1 and Y1 (Seperated by a space)\n");
    scanf("%d %d",&x1,&y1);
    printf("Type X2 and Y2 (Seperated by a space)\n");
    scanf("%d %d",&x2,&y2);
    printf("\nFor Edistance");
    printf("\nThe Distance is %.2f",Edistance(x1,y1,x2,y2));
    printf("\nThe Area is %.2f",areaOfCircle(x1,y1,x2,y2,ptre));
    printf("\n\nFor Mdistance");
    printf("\nThe Distance is %.2f",Mdistance(x1,y1,x2,y2));
    printf("\nThe Area is %.2f",areaOfCircle(x1,y1,x2,y2,ptrm));
    return 0;
}
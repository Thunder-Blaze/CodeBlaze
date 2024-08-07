#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void swap(triangle* tr,int i,int j){
    int temp = tr[i].a;
    tr[i].a = tr[j].a;
    tr[j].a = temp;
    temp = tr[i].b;
    tr[i].b = tr[j].b;
    tr[j].b = temp;
    temp = tr[i].c;
    tr[i].c = tr[j].c;
    tr[j].c = temp;
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    float areas[n];
    float areas2[n];
    for (int i=0; i<n; i++) {
        float ss = (tr[i].a + tr[i].b + tr[i].c)/2.0;
        areas[i]=sqrt(ss*(ss-tr[i].a)*(ss-tr[i].b)*(ss-tr[i].c));
        areas2[i]=areas[i];
    }
    int x = n-1;
    while (x+1) {
        float maxm = 0;
        int maxmi = 0;
        int sum=0;
        for (int i=0,j=1; j<n; i++,j++) {
            if (areas[i]<areas[j]) {
                sum++;
            }
            if (sum==(n-1)) {
                goto end;
            }
        }
        for (int i=0; i<n; i++) {
            if (areas2[i]==0) {
                continue;
            }
            if (areas2[i]>maxm) {
                maxm=areas2[i];
                maxmi=i;
            }
        }
        swap(tr,x,maxmi);
        float tempp = areas[x];
        areas[x]=areas[maxmi];
        areas[maxmi]=tempp;
        areas2[x]=areas[x];
        areas2[maxmi]=areas[maxmi];
        areas2[x]=0;
        // printf("swapped %d with %d\n",x,maxmi);
        end:
        x--;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}




// Sample Input
// 10
// 67 67 19
// 3 57 55
// 33 33 49
// 61 58 59
// 23 43 35
// 48 42 45
// 23 12 27
// 41 34 22
// 26 49 35
// 63 46 45



// Sample Output
// 3 57 55
// 23 12 27
// 41 34 22
// 23 43 35
// 26 49 35
// 33 33 49
// 67 67 19
// 48 42 45
// 63 46 45
// 61 58 59
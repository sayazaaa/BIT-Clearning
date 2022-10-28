#include <stdio.h>
#include <math.h>
int main() {
    int a,i,y=0,m=0,j,l,p;
    scanf("%d",&a);
    j=pow(10, a-1);l=pow(10,a);
    for (i=j;i<l; i++) {
        p=i;
        for (int z=0; z<a; z++) {
            y+=pow(p%10,a);
            p/=10;
        }
        if (y==i) {
            printf("%d\n",i);
            m++;
        }
        y=0;
    }
    if (m==0)
        printf("No output.\n");
    return 0;
}  

#include <stdio.h>
#include <math.h>
int main() {
    int n=1,count=0,num,numm,j;
    if (1!=scanf("%d",&n)) {
        return 0;
    }
    if (n==0) {
        printf("0\n");
        return 0;
    }
    int i=pow(10, n);
    int ii=i/10;
    while (ii%n) {
        ii++;
    }
    for (num=ii; num<i; num+=n) {
        numm=num;
        for (j=n; j>=1; j--) {
            if (numm%(j*j)) {
                break;
            }
            numm/=10;
        }
        if (!j) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

#include <stdio.h>
int main() {
    int n;
    if (1!=scanf("%d",&n)) {
        return 0;
    }
    n*=10;
    if (n%16!=0) {
        printf("No change.\n");
        return 0;
    }
    n/=16;
    printf("%d,%d,%d\n",n*10,n*12,n*9);
    return 0;
}
//1.8 1.5 2.0
//2 3 3
//3 5
//2 2 5
//18
//10 12 9
//16yuan

#include <stdio.h>

int main() {
    int n;
    if (1!=scanf("%d",&n)) {
        return 0;
    }
    for (int i=0; i<2*n-1; i++) {
        printf("*");
    }
    printf("\n");
    for (int i=1,m=2*n-5; i<n; i++) {
        for (int j=0; j<i; j++) {
            printf(" ");
        }
        printf("*");
        if (i!=n-1) {
            for (int l=0; l<m; l++) {
                printf(" ");
            }
            printf("*");
            m-=2;
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int n,num=1;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            printf("%3.d",num++);
        printf("\n");
    }
    return 0;
}

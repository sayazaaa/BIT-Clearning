#include <stdio.h>
int fun(int n, int a[], int i, int s, int c) {
    if (s == n) {
        for (int j = i-1; j >= 0; j--) {
            printf(j?"%d ":"%d", a[j]);
        }
        printf("\n");
        c++;
        return c;
    }
    if (s > n) {
        return c;
    }
    a[i] = 1;
    c = fun(n, a, i + 1 ,s + 1, c);
    a[i] = 2;
    c = fun(n, a, i + 1, s + 2, c);
    return c;
}
int main(int argc, char *argv[]) {
    int a[100]={0},n;
    scanf("%d", &n);
    if(!n){
        puts("num=0");
        return 0;
    }
    printf("num=%d\n",fun(n, a, 0, 0, 0));
    return 0;
}


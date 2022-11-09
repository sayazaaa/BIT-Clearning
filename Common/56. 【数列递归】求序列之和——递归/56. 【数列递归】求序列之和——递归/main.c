#include <stdio.h>
double a(int n);
double b(int n){
    return n%2?1:-1;
}
int main() {
    int n;
    if (1!=scanf("%d",&n)) {
        return 0;
    }
    if (n==1) {
        printf("1\n");
        return 0;
    }
    printf("%lf\n",a(n)>0?a(n):-a(n));
    return 0;
}
double a(int n){
    if (n==1) {
        return 1;
    }
    return b(n-1)*1.0/n+1.0*a(n-1);
}

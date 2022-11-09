#include <stdio.h>
int gcd(int m,int n);
int main() {
    int m,n;
    if (2!=scanf("%d %d",&m,&n)) {
        return 0;
    }
    printf("%d\n",gcd(m,n));
    return 0;
}
int gcd(int m,int n){
    if (m<n) {
        return gcd(n, m);
    }
    if (!(m%n)) {
        return n;
    }
    return gcd(n, m%n);
}
/*
 92%19 = 16
 
 */

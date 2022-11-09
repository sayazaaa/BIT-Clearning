#include <stdio.h>
int n(int a,int b);
int main() {
    int a,b;
    if (2!=scanf("%d %d",&a,&b)) {
        return 0;
    }
    printf("The sum from %d to %d is %d.\n",a,b,n(a, b));
    return 0;
}
int n(int a,int b){
    if (a==b) {
        return b;
    }
    return a+n(a+1, b);
}

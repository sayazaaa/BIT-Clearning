#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c)&&(b+c>a)&&(a+c>b)) {
        if ((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a)) {
            printf("isoceles triangle.\n");
        }else if (a==b&&a==c){
            printf("equilateral triangle.\n");
        }else
            printf("triangle.\n");
    }else
        printf("non-triangle.\n");
    return 0;
}

#include <stdio.h>
int ac(int a);
int main() {
    int h,n,a;
    if (2!=scanf("%d %d",&h,&n)) {
        return 0;
    }
    if (h==1) {
        printf("%d\n",n);
        return 0;
    }
    for (int i=0; i<(3*h-2)/2; i++) {
        printf("%-2d",n++);
        n=ac(n);
    }
    n-=(!(h%2));
    for (int i=0; i<(3*h-2)/2+h%2; i++) {
        if (i==(3*h-2)/2+h%2-1) {
            printf("%d",n--);
        }
        else{
        printf("%-2d",n--);
        }
        n=ac(n);
    }
    printf("\n");
    a=n+1;
    a=ac(a);
    a++;
    a=ac(a);
    for (int i=0; i<h-2; i++) {
        for (int j=0; j<i+1; j++) {
            printf("  ");
        }
        a=ac(a);
        
        printf("%-2d",a);
        for (int j=0; j<3*h-6-2*i; j++) {
            printf("  ");
        }
        printf("%d",a++);
        a=ac(a);
        printf("\n");
    }
    for (int i=0; i<h-1; i++) {
        printf("  ");
    }
    for (int i=0; i<h/2; i++) {
        printf("%-2d",a++);
        a=ac(a);
    }
    a-=(!(h%2));
    a=ac(a);
    for (int i=0; i<h/2+h%2; i++) {
        if (i==h/2+h%2-1) {
            printf("%d",a--);
        }
        else{
        printf("%-2d",a--);
        }
        a=ac(a);
    }
    printf("\n");
    return 0;
}
int ac(int a){
    if (a>9) {
        a=0;
    }
    if (a<0) {
        a=9;
    }
    return a;
}

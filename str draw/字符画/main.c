#include <stdio.h>
int draw1(int n){
    for (int i = -n; i <= n; i ++) {
        for (int j = 0; j < (i>0?i:-i); j ++ ) {
            printf(" ");
        }
        for (int k = 2*n+1; k>2*(i>0?i:-i) ;k --) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int draw3(int n){
    int h;
    for(int i=-n+1;i<n;i++){
        h=i>0? i:-i;
        for(int j=0;j<h;j++){
            printf(" ");
        }
        printf("*");
        if(i!=-n+1&&i!=n-1){
            for(int j=0;j<2*n-1-2*h-2;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


int draw2(int m){
    int h,s;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=m; j++) {
            h=i<j?i:j;
            s=m-i+1<m-j+1?m-i+1:m-j+1;
            printf("%d ",h<s?h:s);
        }
        printf("\n");
    }
    return 0;
}
int draw4(int n){
    int h,a=97,b=92+4*n;
    for(int i=-n+1;i<n;i++){
        h=i>0? i:-i;
        for(int j=0;j<h;j++){
            printf(" ");
        }
        a=a>122?97:a;
        printf("%c",a++);
        if(i!=-n+1&&i!=n-1){
            for(int j=0;j<2*n-1-2*h-2;j++){
                printf(" ");
            }
            b=b>122?96+((4*n-4)%26):b;
            b=b<97?122:b;
            printf("%c",b--);
            
        }
        printf("\n");
    }
    
    return 0;
}
int main() {
    draw1(5);
    draw2(5);
    draw3(5);
    draw4(6);
    return 0;
}
//2 4 3 7 4 11 5 15


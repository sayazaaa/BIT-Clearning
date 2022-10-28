#include <stdio.h>
int main() {
    int i,j,n;
    int x,y,z;
    if (1!=scanf("%d",&n)) {
        return 0;
    }
    n-=1;
    for (i = -n; i <= n; i ++) {
        j = 0;
        for (; j<(i>0?i:-i); j ++ ) {
            printf("  ");
        }
        int h=i>0?i:-i;
        for (int l=0,ll=(n-h)*2+1; l<2*n-2*h+1;l++,ll--) {
            x=n-l+1;//(n-h)*2+1
            y=n-ll+2;
            z=x>y?x:y;
            
            printf("%-2d",z);
        }
        
        printf("\n");
    }
    return 0;
}
//shu n-h
//heng i>0?i:-i

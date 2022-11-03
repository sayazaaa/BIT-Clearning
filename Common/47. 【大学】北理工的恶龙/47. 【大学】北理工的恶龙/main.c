//这题和小马运货是一个题
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int x, y, v=1;
    if(2!=scanf("%d%d",&x,&y)){
        return 0;
    }
    if (y<x) {
        printf("bit is doomed!\n");
    }
    else{
        int oo=0,a[x],b[y+1];
        for (int n=0; n<x; n++) {
            if(1!=scanf("%d",&a[n])){
                return 0;
            }
        }
        for (int n=0; n<y; n++) {
            if(1!=scanf("%d",&b[n])){
                return 0;
            }
        }
        for (int n=0; n<x; n++) {
            int c[100]={0},q=0;
            for (int m=0; m<y; m++) {
                if (a[n]<=b[m]) {
                    c[q]=b[m];
                    q++;
                }
            }
            for (int p=0; p<q; p++) {
                if (c[0]>c[p]) {
                    c[0]=c[p];
                }
            }
            oo+=c[0];
            v=c[0];
            if (v==0&&a[n]!=0 ) {
                printf("bit is doomed!\n");
                return 0;
            }
            for (int g=0; g<y; g++) {
                if (c[0]==b[g]) {
                    for (int h=g; h<y; h++) {
                        b[h]=b[h+1];
                    }
                    y--;
                    break;
                }
            }
        }
        printf("%d\n",oo);
    }
    return 0;
}

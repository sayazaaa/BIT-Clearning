//#include <stdio.h>
//int main(int argc, const char * argv[]) {
//    int x, y, v=1;
//    if(2!=scanf("%d%d",&x,&y)){
//        return 0;
//    }
//    if (y<x) {
//        printf("bit is doomed!\n");
//    }
//    else{
//        int oo=0,a[x],b[y+1];
//        for (int n=0; n<x; n++) {
//            if(1!=scanf("%d",&a[n])){
//                return 0;
//            }
//        }
//        for (int n=0; n<y; n++) {
//            if(1!=scanf("%d",&b[n])){
//                return 0;
//            }
//        }
//        for (int n=0; n<x; n++) {
//            int c[100]={0},q=0;
//            for (int m=0; m<y; m++) {
//                if (a[n]<=b[m]) {
//                    c[q]=b[m];
//                    q++;
//                }
//            }
//            for (int p=0; p<q; p++) {
//                if (c[0]>c[p]) {
//                    c[0]=c[p];
//                }
//            }
//            oo+=c[0];
//            v=c[0];
//            if (v==0&&a[n]!=0 ) {
//                printf("bit is doomed!\n");
//                return 0;
//            }
//            for (int g=0; g<y; g++) {
//                if (c[0]==b[g]) {
//                    for (int h=g; h<y; h++) {
//                        b[h]=b[h+1];
//                    }
//                    y--;
//                    break;
//                }
//            }
//        }
//        printf("%d\n",oo);
//    }
//    return 0;
//}
//上面是之前的版本
#include <stdio.h>
void quick_th(int a[],int l,int r);
void quick(int a[],int len);
int main(){
    int a,b;
    int n[20],m[20];
    int out=0;
    if(2!=scanf("%d %d",&a,&b)){
        return 0;
    }
    if (a>b) {
        printf("bit is doomed!\n");
        return 0;
    }
    for (int i=0; i<a; i++) {
        if(1!=scanf("%d",&n[i])){
            return 0;
        }
    }
    for (int i=0; i<b; i++) {
        if(1!=scanf("%d",&m[i])){
            return 0;
        }
    }
    quick(n, a);
    quick(m, b);
    int i=0,j=0;
    while (i<a&&j<b) {
        while(m[j]>=n[i]&&i<a&&j<b){
            out+=m[j];
            j++;i++;
        }
        while (m[j]<n[i]&&i<a&&j<b) {
            j++;
        }
    }
    if(i<a){
        printf("bit is doomed!\n");
    }
    else{
        printf("%d\n",out);
    }
    return 0;
}
void quick_th(int *a,int l,int r){
    int i=l,j=r;
    int mid = a[(l+r)/2];
    int temp;
    while(i<=j) {
        while (a[i]<mid) {
            i++;
        }
        while (a[j]>mid) {
            j--;
        }
        if (i<=j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;j--;
        }
    }
    if (l<j) {
        quick_th(a, l, j);
    }
    if (i<r) {
        quick_th(a, i, r);
    }
}
void quick(int *a,int len){
    quick_th(a, 0, len-1);
}

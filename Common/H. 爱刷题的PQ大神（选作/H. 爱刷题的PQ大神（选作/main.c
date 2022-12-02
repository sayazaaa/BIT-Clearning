#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct problem {
    int a;
    int b;
}P;
P a[100000],temp[100000];
void merge(int l, int r);
int main() {
    char fname[100];
    FILE * fp;
    int t,n,j=0,l=0;
    gets(fname);
    if( (fp = fopen ( fname, "r" )) == NULL ){
        return -1;
    }
    fscanf(fp, "%d" ,&t);
    for (int i=0; i<t; i++) {
        if(i){
            puts("");
        }
        memset(a, 0, 800000);
        memset(temp, 0, 800000);
        fscanf(fp, "%d", &n);
        for (j=0,l=0; l<n; j++,l++) {
            fscanf(fp, "%d %d",&a[j].a,&a[j].b);
            if(a[j].b<100){
                j--;
            }
        }
        if(a[0].b<100){
            puts("This OJ is too easy for PQ Dashen!");
            continue;
        }
        merge(0, j);
        for (j=0; a[j].a!=0; j++) {
            printf("%d\n",a[j].a);
        }
    }
    fclose(fp);
    return 0;
}
void merge(int l, int r) {
    if (r - l <= 1){
        return;
    }
    int mid = l + ((r - l) >> 1);
    merge(l, mid);
    merge(mid, r);
    for (int i = l, j = mid, k = l; k < r; k++) {
        if (j==r||(i<mid&&(a[i].b>a[j].b||(a[i].b==a[j].b&&a[i].a<a[j].a)))){
            temp[k] = a[i++];
        }
        else{
            temp[k] = a[j++];
        }
    }
    for (int i = l; i < r; i++){
        a[i] = temp[i];
    }
}

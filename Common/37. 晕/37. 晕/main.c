//#include <stdio.h>
//int main() {
//    int x=1,y=0;
//    int n,num=1,i=0,j=0;
//    int a[100][100];
//    int count;
//    if (1!=scanf("%d",&n)) {
//        return 0;
//    }
//    count=n;
//    int nn=n*n;
//    for (; i<n; i+=x) {
//        a[i][j]=num++;
//    }
//    i--;
//    while (num<=nn) {
//        count--;
//        y=x;x=0;
//        for (int loop=0;loop<count ; loop++) {
//            i+=x;j+=y;
//            a[i][j]=num++;
//        }
//        x=-y;y=0;
//        for (int loop=0;loop<count ; loop++) {
//            i+=x;j+=y;
//            a[i][j]=num++;
//        }
//    }
//    for (i=0; i<n; i++) {
//        for (j=0; j<n; j++) {
//            printf("%3d",a[j][i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=1,b;
            for(;a!=i&&a!=j&&a!=n+1-i&&a!=n+1-j;a++);
            b=n*n-(n-2*a+1)*(n-2*a+1);
            if(a==n+1-i)
                printf("%3d",b+i-j);
            else if(a==n+1-j)
                printf("%3d",b-j+i);
            else if(a==i)
                printf("%3d",b-2-2*n+3*i+j);
            else
                printf("%3d",b+2+2*n-3*j-i);
        }
        printf("\n");
    }
    return 0;
}

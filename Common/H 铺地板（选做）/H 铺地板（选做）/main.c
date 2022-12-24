#include<stdio.h>
int main(){
    int n,x=0,y=0,a[30][30],b=1;
    scanf("%d",&n);
    for (int i=1;i<=n*n;i++) {
        a[y][x]=i;
        x+=b;y-=b;
        if(x>=n||y>=n||x<0||y<0){
            x>=n||y>=n?(x>=n?(y+=2,x--):(x+=2,y--)):(x<0?x++:y++);
            b=-b;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf(j?"%3d":"%2d",a[i][j]);
        }
        puts("");
    }
    return 0;
}

#include <stdio.h>
#define N 30
int main(){
    char a[N];
    char b[N];
    int n,m,d,e;
    char c[N];
    if (4!=scanf("%s %s %d %s",a,b,&n,c)) {
        return 0;
    }
    int flag=1;
    for(int i=0;flag;i++){
        if(b[i]='\0'){
            flag=0;
            d=i;
        }
    }
    for(int i=0;flag&&c[i]!='\0';i++){
        for(int j=0;a[j]!='\0';j++){
            if(c[i]==a[j]){
                flag=0;
                m=j+1+n;
                e=m%d;
                c[i]=b[e-1];
                printf("%c",c[i]);
                break;
            }
        }
        printf("%c",c[i]);
    }
    return 0;
}

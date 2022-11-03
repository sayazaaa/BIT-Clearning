#include <stdio.h>
#include <string.h>
#define N 100000
int hh(char a[],int start,int end);
int ju(char a);
int main() {
    char a[N];
    int dia[N],pg=0;
    int i=0;
    memset(dia, 0, 4*N);
    while (1) {
        if (gets(a)==NULL) {
            break;
        }
        int start,end;
        int flag=1;
        for (i=0; a[i]!='\0'; i++) {
            flag=1;
            start=0;
            end=0;
            if (ju(a[i])) {
                start=i;
                while (ju(a[i])) {
                    i++;
                }
                end=--i;
                for (int j=0; dia[j]!=0; j++) {
                    if (dia[j]==hh(a, start, end)) {
                        printf("%d",j+1);
                        flag=0;
                        break;
                    }
                }
                if (flag) {
                    dia[pg++]=hh(a, start, end);
                    for (int j=start; j<end+1; j++) {
                        printf("%c",a[j]);
                    }
                }
            }
            else{
                printf("%c",a[i]);
            }
        }
        puts("");
    }
    return 0;
}
int ju(char a){
    return (('A'<=a&&'Z'>=a)||('a'<=a&&'z'>=a))?1:0;
}
int hh(char a[],int start,int end){
    int res=1;
    int mod=51646229;
    for (int i=start; i<=end; i++) {
        res=(res*23345+a[i])%mod;
    }
    return res;
}

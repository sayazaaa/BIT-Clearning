#include <stdio.h>
#include <string.h>
#define N 10000
int azti(char a);
int atz(char a);
int search(char **c,char *a);
int main() {
    char a[N];
    char b[N];
    int c[N][100],num;
    int pg[N],m=1;
    int node;
    int count=0;
    int i=0;
    memset(c, 0, 400*N);
    memset(pg, 0, 4*N);
    while (gets(a)!=NULL) {
        for (char *p=a; *p!='\0'; p++) {
            if (atz(*p)) {
                char *q=b;
                memset(b, 0, N);
                for (; atz(*p); p++) {
                    *q=*p;q++;
                }
                
                node=0;
                for (i=0; i<(q-b); i++) {
                    num=azti(b[i]);
                    node=c[node][num];
                    if (!node) {
                        break;
                    }
                }
                if (i==(q-b)&&pg[node]) {
                    printf("%d",pg[node]);
                }
                else{
                    printf("%s",b);
                    node=0;
                    for (i=0; i<(q-b); i++) {
                        num=azti(b[i]);
                        if (!c[node][num]) {
                            c[node][num]=++count;
                        }
                        node=c[node][num];
                    }
                    pg[node]=m++;
                }
                p--;
            }
            else{
                printf("%c",*p);
            }
        }
        memset(a, 0, N);
        printf("\n");
    }
    return 0;
}
int atz(char a){
    return (( (a>='a'&&a<='z') || (a>='A'&&a<='Z') ) ? 1 : 0 );
}
int azti(char a){
    return a<='z'?2*(a-'a'):2*(a-'A')+1;
}

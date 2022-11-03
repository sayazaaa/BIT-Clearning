#include <stdio.h>
#include <string.h>
int ju(char a);
int main() {
    int fnum=1;
    int x,y;
    char field[110][110];
    int flag=0;
    while (1) {
        memset(field, 0, 12100);
        if (2!=scanf("%d %d",&y,&x)) {
            return 0;
        }
        if (x==0) {
            break;
        }
        if(flag){
            puts("");
        }
        flag=1;
        for (int i=0,j=0; i<=y; i++) {
            for (j=0; j<=x; j++) {
                field[i][j]=(i*j)==0?'0':getchar();
            }
            field[i][j]='\0';
            getchar();
        }
        printf("Field #%d:\n",fnum++);
        for (int i=1; i<=y; i++) {
            for (int j=1; j<=x; j++) {
                if (field[i][j]=='.') {
                    field[i][j]='0'+ju(field[i-1][j-1])+ju(field[i+1][j-1])+ju(field[i-1][j+1])+ju(field[i+1][j+1])+ju(field[i][j+1])+ju(field[i+1][j])+ju(field[i-1][j])+ju(field[i][j-1]);
                }
                putchar(field[i][j]);
            }
            puts("");
        }
    }
    return 0;
}
int ju(char a){
    return a=='*'?1:0;
}

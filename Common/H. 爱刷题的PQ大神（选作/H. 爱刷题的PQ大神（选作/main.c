#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv []) {
    char fname[100];
    int o;
    FILE * in;
//    scanf("%s",fname);
    if( (in = freopen ( "in.txt", "r", stdin)) == NULL ){
        printf("error\n");
        exit(EXIT_FAILURE);
    }
    printf("%p",in);
    o = getc(in);
    while(o!=EOF){
        o=getc(in);
        putchar(o);
    }
    return 0;
}


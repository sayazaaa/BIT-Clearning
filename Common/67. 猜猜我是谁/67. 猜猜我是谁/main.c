#include <stdio.h>
int main() {
    char fname[20],a[100];
    int b;
    FILE *in;
    scanf("%s %d",fname,&b);
    if( (in = freopen ( fname, "r" ,stdin )) == NULL ){
        puts("File Name Error.");
        return 0;
    }
    for (int i=0; i<b; i++) {
        if( gets(a) == NULL ){
            puts( "Line No Error." );
            return 0;
        }
    }
    puts(a);
    return 0;
}

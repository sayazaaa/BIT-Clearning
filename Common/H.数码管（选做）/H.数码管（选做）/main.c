#include <stdio.h>
#include <string.h>
int main() {
    char a[10][3]={"7D","50","37","57","5A","4F","6F","54","7F","5F"},b[5];
    int len;
    while (1) {
        scanf("%s",b);
        if(b[0]==48){
            break;
        }
        len=strlen(b);
        if(len<5){
            for (int i=0; i<5-len; i++) {
                printf("7D ");
            }
        }
        for (int i=0; i<len; i++) {
            printf(i==len-1?"%s\n":"%s ",a[b[i]-48]);
        }
    }
    return 0;
}

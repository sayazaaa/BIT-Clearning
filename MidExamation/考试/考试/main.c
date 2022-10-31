#include <stdio.h>
#include <string.h>
int main() {
    char a[100],b[100];
    int c;
    char input[100];
    int flag=1;
    if (3!=scanf("%s %s %d",a,b,&c)) {
        return 0;
    }
    getchar();
    gets(input);
    int lena=(int)strlen(a),lenb=(int)strlen(b);
    int lenin=(int)strlen(input);
    for (int i=0; i<lenin; i++) {
        flag=1;
        for (int j=0; j<lena&&input[i]!=' '; j++) {
            if (input[i]==a[j]) {
                printf("%c",(b[(j+c)%lenb]));
                flag=0;
                break;
            }
        }
        if (flag) {
            printf("%c",input[i]);
        }
    }
    printf("\n");
    return 0;
}

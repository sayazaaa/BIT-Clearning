#include <stdio.h>
#include <string.h>
int main() {
    
    char a[60]={0};
    char e;
    int n;
    int i;
    memset(a, 0, 60);
    if(3!=scanf("%s %c %d",a,&e,&n)) {
        return 0;
    }
    int len=(int)strlen(a);
    
    if (a[1]!='.') {
        printf("%s",a);
        for (i=0; i<n; i++) {
            printf("0");
        }
        printf(".00000000\n");
        return 0;
    }
    if (n>=len-2) {
        printf("%c",a[0]);
        for (i=2; i<len; i++) {
            printf("%c",a[i]);
        }
        for (i=0; i<n-len+2; i++) {
            
            printf("0");
        }
        printf(".00000000\n");
    }
    else if (n>=0) {
        for (i=1; i<n+2; i++) {
            a[i]=a[i+1];
        }
        a[i-1]='.';
        for (int j=-500,l=0;j<9; l++,j++) {
            if (a[l]=='.') {
                j=0;
            }
            if (a[l]=='\0') {
                break;
            }
            printf("%c",a[l]);
        }
        for (i=0; i<8-(len-2-n); i++) {
            printf("0");
        }
        printf("\n");
    }
    else{
        printf("0.");
        for (i=0; i<-n-1&&i<8; i++) {
            printf("0");
        }
        for (int j=0; i<8; i++) {
            j=j==1?2:j;
            if (a[j]=='\0') {
                printf("0");
            }
            else{
                printf("%c",a[j]);
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}

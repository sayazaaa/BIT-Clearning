#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    int len;
    int sign1,sign2,sign3,sign4;
    int n;
    scanf("%d",&n);
    getchar();
    for (int i=0; i<n; i++) {
        gets(a);
        sign1=0;sign2=0;sign3=0;sign4=0;
        len=(int)strlen(a);
        if (len<6) {
            printf("Not Safe\n");
            continue;
        }
        for (int i=0; i<len; i++) {
            if (a[i]>='0'&&a[i]<='9') {
                sign1=1;
            }
            else if (a[i]>='a'&&a[i]<='z') {
                sign2=1;
            }
            else if (a[i]>='A'&&a[i]<='Z') {
                sign3=1;
            }
            else {
                sign4=1;
            }
            if (sign1+sign2+sign3+sign4==4) {
                break;
            }
        }
        switch (sign1+sign2+sign3+sign4) {
            case 1:
                printf("Not Safe\n");
                break;
            case 2:
                printf("Medium Safe\n");
                break;
            default:
                printf("Safe\n");
        }
        
    }
    return 0;
}

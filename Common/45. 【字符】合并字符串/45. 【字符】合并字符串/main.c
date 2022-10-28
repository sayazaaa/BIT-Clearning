#include <stdio.h>
#include <string.h>
int main() {
    char a[100],b[100];
    char c[200];
    memset(a, 0, 100);
    memset(b, 0, 100);
    memset(c, 0, 200);
    gets(a);
    gets(b);
    int i=0,j=0;
    int count=0;
    while ((count)!=(strlen(a)+strlen(b))) {
        if (a[i]>b[j]) {
            c[count]=b[j]=='\0'?a[i++]:b[j];
            count++;
            j++;
        }
        else if (b[j]>a[i]) {
            c[count]=a[i]=='\0'?b[j++]:a[i];
            count++;
            i++;
        }
        else if (a[i]==b[j]) {
            c[count]=a[i]=='\0'?b[j++]:a[i];
            c[count+1]=b[j]=='\0'?a[i++]:b[j];
            count+=2;
            i++;
            j++;
        }
        else if (i==strlen(a)-1) {
            while (j<strlen(b)) {
                c[count]=b[j];
                count++;
                j++;
            }
            break;
        }
        else if (j==strlen(b)-1) {
            while (i<strlen(a)) {
                c[count]=a[i];
                count++;
                i++;
            }
            break;
        }
    }
    printf("%s\n",c);
    return 0;
}

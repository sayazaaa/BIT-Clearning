#include <stdio.h>
#include <string.h>
int bubb(int a[],int len);
int main() {
    char a[100];
        if (1!=scanf("%s",a)) {
            return 0;
        }
    int len=(int)strlen(a);
    int flag=1;
    int temp;
    for (int i=0; flag; i++) {
        flag=0;
        for (int j=0; j<len-1; j++) {
            if (a[j]<a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
    }
    printf("%s\n",a);
    return 0;
}

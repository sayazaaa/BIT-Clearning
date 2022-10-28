#include <stdio.h>
int main() {
    int a;
    if (1!=scanf("%d",&a)) {
        return 0;
    }
    int b=2;
    int i=2,j=0;
    int flag=1;
    while (flag) {
        j=0;
        while (1) {
            if (a==b) {
                flag=0;
                break;
            }
            b*=i;
            j++;
            if (b>a) {
                i++;
                b=i;
                j=0;
            }
            if (i>=a) {
                printf("%d\n1\n",a);
                return 0;
            }
        }
    }
    printf("%d\n%d\n",i,j+1);
    return 0;
}

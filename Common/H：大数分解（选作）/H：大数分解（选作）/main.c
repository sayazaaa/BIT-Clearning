#include <stdio.h>
int main() {
    int a,i=2;
    if(1!=scanf("%d",&a)){
        return 0;
    }
    while (i*i<=a) {
        if(!(a%i)){
            a/=i;
            printf("%d\n",i);
            i--;
        }
        i++;
    }
    printf("%d\n",a);
    return 0;
}

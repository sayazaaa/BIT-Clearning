#include <stdio.h>
int main() {
    int a,b=1,c=0;
    scanf("%d",&a);
    do{
        b=(b<<1)%((a<<1)+1);
        c++;
    }while (b!=1);
    printf("%d\n",c);
    return 0;
}

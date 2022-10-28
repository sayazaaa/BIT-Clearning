#include <stdio.h>
int main() {
    int a,n;
    scanf("%d%d",&a,&n);
    int b=a;
    for (int i=1; i<n; i++){
        b*=a;
        b%=1000;
    }
    if (n==0)
        printf("The last 3 numbers is 1.\n");
    else
        printf("The last 3 numbers is %03d.\n",b);
    return 0;
}

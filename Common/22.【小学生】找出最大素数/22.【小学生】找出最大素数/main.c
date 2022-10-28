#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    for (b=a; b>=2; b--)
        for (int i=2; i<b; i++){
            if (!(b%i))
                break;
            if (i==b-1) {
                printf("The max prime number is %d.\n",b);
                return 0;
            }
        }
}

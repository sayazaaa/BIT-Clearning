#include <stdio.h>
int main() {
    int a,i=100;
    int ii,iii;
    int n=0;
    if (1!=scanf("%d",&a)) {
        return 0;
    }
    while(i<300) {
        if (!(i%a)) {
            ii=i%100*10;
            n=0;
            while (n<10) {
                if (!((ii+n)%a)) {
                    iii=(ii+n)%100*10;
                    n=0;
                    while (n<10) {
                        if (!((iii+n)%a)) {
                            printf("%d\n",i*100+(iii+n)%100);
                        }
                        n++;
                    }
                }
                n++;
            }
        }
        i++;
    }
    if (!(300%a)) {
        puts("30000");
    }
    return 0;
}

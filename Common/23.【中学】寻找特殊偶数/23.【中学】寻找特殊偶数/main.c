#include <stdio.h>
int main() {
    while (1) {
        int a=0,b=0,count=0;
        scanf("%d%d",&a,&b);
        if (a==0)
            return 0;
        if (a>b||a<1000||b>9999)
            printf("Error\n");
        else{
            
            for (int c=a; c<=b; c++){
                int h=c/1000,j=c/100%10,k=c/10%10,l=c%10;
                if (h!=j&&h!=k&&h!=l&&j!=k&&j!=l&&k!=l&&c%2==0) {
                    printf("%d  ",c);
                    count++;
                }
            }
            printf("\ncounter=%d\n",count);
        }
    }
    return 0;
}

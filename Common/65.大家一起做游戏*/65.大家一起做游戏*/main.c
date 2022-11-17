#include <stdio.h>
int main() {
    int a,b;
    if(2!=scanf("%d %d",&a,&b)){
        return 0;
    }
    int ans=1;
    for (int i=2; i<=a; i++) {
        ans=(ans-1+b)%i+1;
    }
    printf("The left child is NO %d.\n",ans);
    return 0;
}

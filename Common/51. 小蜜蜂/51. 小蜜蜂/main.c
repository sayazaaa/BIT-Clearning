#include <stdio.h>
int main(){
    int num=0,j=2,c,b;
    if (2!=scanf("%d %d",&c,&b)) {
        return 0;
    }
    num = b-c;
    long long int a[100000],cou[100000]={0};
    a[0]=1;a[1]=2;
    while (j<num) {
        a[j]=a[j-1]+a[j-2];
        cou[j]=cou[j-1]+cou[j-2];
        cou[j]+=a[j]/1000000000;
        a[j]%=1000000000;
        j++;
    }
    if (cou[num-1]) {
        printf("%lld",cou[num-1]);
    }
    printf("%lld\n",a[num-1]);
    return 0;
}

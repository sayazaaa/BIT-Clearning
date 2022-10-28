#include <stdio.h>
#include <string.h>
#include <math.h>
int sw(int ori,char be[],int len);//输入进制和数字转十进制
int max(char a[],int len);//求数组最大值
int ctoi(char a);//字符串转数字
int main(int argc, const char * argv[]) {
    char a[40],b[40];
    if (2!=scanf("%s %s",a,b)) {
        return 0;
    }
    int len1=(int)strlen(a),len2=(int)strlen(b);
    int max1=max(a, len1),max2=max(b, len2);
    for (int i=max1+1; i<=36; i++) {
        for (int j=max2+1; j<=36; j++) {
            int swa=sw(i, a, len1),swb=sw(j, b, len2);
            if (swa==swb) {
                printf("%s (base %d) = %s (base %d)\n",a,i,b,j);
                return 0;
            }
        }
    }
    printf("%s is not equal to %s in any base 2..36\n",a,b);
    return 0;
}
int sw(int ori,char be[],int len){
    int after=0;
    char bee[40];
    for (int i=0; i<len; i++) {
        bee[i]=be[i];
    }
    for (int i=0; i<len; i++) {
        bee[i]=ctoi(bee[i]);
        after+=bee[i]*pow(ori, len-1-i);
    }
    return after;
}
int max(char a[],int len){
    int max=0;
    for (int i=0; i<len; i++) {
        if (max<a[i]) {
            max=a[i];
        }
    }
    max=ctoi(max);
    return max;
}
int ctoi(char a){
    if (a<58) {
        a-=48;
    }
    else{
        a-=55;
    }
    return a;
}

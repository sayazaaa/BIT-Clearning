#include <stdio.h>
int main() {
    int a=0,b=0,ans=0;
    char c=0;
    scanf("%d %c %d",&a,&c,&b);
    switch (c) {
        case '+':ans=a+b;break;
        case '-':ans=a-b;break;
        case '/':ans=a/b;break;
        case '*':ans=a*b;break;
        case '%':ans=a%b;break;
    }
    printf("%d\n",ans);
    return 0;
}

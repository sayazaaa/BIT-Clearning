#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ctoi(char *a);
int main() {
    int *top=(int*)malloc(sizeof(int)*15);
    char input[10];
    while (scanf("%s",input)!=EOF) {
        top--;
        switch (input[0]+input[1]) {
            case '+':
                *(top-1)+=*top;
                break;
            case '-':
                *(top-1)-=*top;
                break;
            case '*':
                *(top-1)*=*top;
                break;
            case '/':
                *(top-1)/=*top;
                break;
            default:
                top++;
                *top++=ctoi(input);
                break;
        }
    }
    printf("%d\n",*(top-1));
    return 0;
}
int ctoi(char *a){
    int ans=0,flag=0;
    if (*a=='-') {
        ans=-ans;
        flag=1;
    }
    for (char *i=a+flag; *i; i++) {
        ans*=10;
        ans+=*i-48;
    }
    return ans;
}

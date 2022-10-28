#include <stdio.h>
#include <string.h>
int ctoi(char a[]);
int main() {
    int max=0,min=0,input=1,flag=1,ans;
    char a[100],temp;
    int count=0,fu=0;
    char op;
    while (1) {
        memset(a, 0, 100);
        while (1) {
            temp=getchar();
            if (temp=='=') {
                break;
            }
            if (temp==','&&fu==0) {
                count=0;
                break;
            }
            if (temp>='0'&&temp<='9') {
                fu=0;
                a[count]=temp;
                count++;
            }
            if (temp=='+'||temp=='/'||temp=='*'||temp=='%') {
                op=temp;
                break;
            }
            if (temp=='-') {
                fu=1;
                a[0]='-';
                count++;
            }
            if (fu==1&&temp==',') {
                op='-';
                break;
            }
        }
        if (temp=='+'||temp=='/'||temp=='*'||temp=='%'||(fu==1&&temp==',')) {
            break;
        }
        input=ctoi(a)*((fu==1)?-1:1);
        max=input>max?input:max;
        min=input<min?input:min;
        if (flag) {
            max=input;
            min=input;
            flag--;
        }
        
    }
    switch (op) {
        case '+':
            ans = max+min;
            break;
        case '-':
            ans= max-min;
            break;
        case '*':
            ans= max*min;
            break;
        case '/':
            ans= max/min;
            break;
        case '%':
            ans= max%min;
            break;
        default:
            printf("ERROR!");
            return 0;
    }
    max>=0?printf("%d",max):printf("(%d)",max);
    printf(" %c ",op);
    min>=0?printf("%d",min):printf("(%d)",min);
    printf(" = %d\n",ans);
    return 0;
}
//100 + 1 = 101
//100 + 1 = 101
int ctoi(char a[]){
    int len=(int)strlen(a);
    int ans=0,ten=1;
    for (int i=len-1; i>=0; i--) {
        if (a[i]=='-') {
            ans*=-1;
        }
        if (a[i]<'0'||a[i]>'9') {
            continue;
        }
        ans+=((*(a+i))-48)*ten;
        ten*=10;
    }
    return ans;
}

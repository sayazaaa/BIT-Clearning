#include <stdio.h>
#include <string.h>
int day(int d,int m,int y) {
    int flag=0;
    if ((y%4==0&&y%100!=0)||y%400==0)
        flag=1;
    switch (m) {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            if (d>31) return 0;
            break;
        case 4:case 6:case 9:case 11:
            if (d>30) return 0;
            break;
        case 2:
            if (d>28+flag) return 0;
            break;
        default:
            return 0;
    }
    return 1;
}
int num(char* x){
    int s=0,b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char q[12]={'1','0','X','9','8','7','6','5','4','3','2'};
    for (int i=0; i<17; i++)
        s+=b[i]*(x[i]-48);
    s=q[s%11];
    return (char)s;
}
int main() {
    int n=0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        char x[19]={0};
        scanf("%s",x);
        int len=(int)strlen(x);
        if (len!=15) {
            if (num(x)==x[17]&&len==18&&day(10*x[12]+x[13]-528,10*x[10]+x[11]-528,1000*x[6]+100*x[7]+10*x[8]+x[9]-53328))
                printf("Valid\n");
            else
                printf("Invalid\n");
        }
        else{
            for (int j=14; j>5; j--)
                x[j+2]=x[j];
            if (x[14]=='9'&&x[15]=='9'&&(x[16]=='6'||x[16]=='7'||x[16]=='8'||x[16]=='9'))
                x[7]='8';
            else
                x[7]='9';
            x[6]='1';
            x[17]=num(x);x[18]='\0';
            printf("%s\n",x);
        }
    }
    return 0;
}
//7 9 10 5 8 4 2 1 6 3  7  9  10 5  8  4  2
//1 2 3  4 5 6 7 8 9 10 11 12 13 14 15 16 17
//110105491231996
//110105491231002
//11010519491231002X
//不使用数组解决
//switch (m) {
//    case 1:
//    case 11:
//        sum+=x*7;break;
//    case 2:
//    case 12:
//        sum+=x*9;break;
//    case 3:
//    case 13:
//        sum+=x*10;break;
//    case 4:
//    case 14:
//        sum+=x*5;break;
//    case 5:
//    case 15:
//        sum+=x*8;break;
//    case 6:
//    case 16:
//        sum+=x*4;break;
//    case 7:
//    case 17:
//        sum+=x*2;break;
//    case 8:
//        sum+=x;break;
//    case 9:
//        sum+=x*6;break;
//    case 10:
//        sum+=x*3;break;
//    default:break;
//}
//}
//if (m>16) {
//sum%=11;
//switch (sum) {
//    case 0:
//    case 1:
//        sum=!sum;break;
//    default:sum=12-sum;break;
//}

//}
//

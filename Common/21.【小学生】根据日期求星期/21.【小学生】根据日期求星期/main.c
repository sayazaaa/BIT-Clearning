#include <stdio.h>
int main(){
    int a,b,c,day=0,flag=0;
    scanf("%d%d%d",&a,&b,&c);
    for (int i=1900;i<a;i++) {
        if ((i%4==0&&i%100!=0)||i%400==0)
            day+=366;
        else
            day+=365;
    }
    if ((a%4==0&&a%100!=0)||a%400==0)
        flag=1;
    switch (b) {
        case 12:day+=30;
        case 11:day+=31;
        case 10:day+=30;
        case 9:day+=31;
        case 8:day+=31;
        case 7:day+=30;
        case 6:day+=31;
        case 5:day+=30;
        case 4:day+=31;
        case 3:day+=28+flag;
        case 2:day+=31;
    }
    day+=c;
    printf("%d\n",day%7);
    return 0;
}

#include <stdio.h>
int main() {
    int a,b,c,n;
    if (4!=scanf("%d %d %d %d",&a,&b,&c,&n)) {
        return 0;
    }
    int flag=0;
    if((a%4==0&&a%100!=0)||a%400==0){
        flag=1;
    }
    while (n!=0) {
        c++;
        n--;
        switch (b) {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                if (c>31) {
                    b++;c=1;
                }
                break;
            case 4:case 6:case 9:case 11:
                if (c>30) {
                    b++;c=1;
                }
                break;
            case 2:
                if (c>28+flag) {
                    b++;c=1;
                }
                break;
            default:
                break;
        }
        if (b>12) {
            b=1;
            a++;
            flag=0;
            if((a%4==0&&a%100!=0)||a%400==0){
                flag=1;
            }
        }
    }
    printf("%d.%d.%d\n",a,b,c);
    return 0;
}

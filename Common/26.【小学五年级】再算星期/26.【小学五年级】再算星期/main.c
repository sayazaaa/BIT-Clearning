#include <stdio.h>
int main() {
    int d,m,y,flag=0,day=0;
    scanf("%d%d%d",&y,&m,&d);
    if ((y%4==0&&y%100!=0)||y%400==0)
        flag=1;
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (d>31){
                printf("day is error.\n");
                return 0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (d>30){
                printf("day is error.\n");
                return 0;
            }
            break;
        case 2:
            if (d>28+flag){
                printf("day is error.\n");
                return 0;
            }
            break;
        default:
            printf("month is error.\n");
            return 0;
    }
    for (int i=1900;i<y;i++) {
        if ((i%4==0&&i%100!=0)||i%400==0)
            day+=366;
        else
            day+=365;
    }
    switch (m) {
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
    day+=d;
    printf("%d\n",day%7);
    return 0;
}

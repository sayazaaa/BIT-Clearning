#include <stdio.h>
int main() {
    int y,m,d,flag=0;
    if (3!=scanf("%d %d %d",&y,&m,&d)) {
        return 0;
    }
    int a[5][2]={{3,8},{4,9},{5,0},{1,6},{2,7}};
    int day=0;
    for (int i=2012;i<y;i++) {
        if ((i%4==0&&i%100!=0)||i%400==0){
            day+=366;
        }
        else{
            day+=365;
        }
    }
    if ((y%4==0&&y%100!=0)||y%400==0){
        flag=1;
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
    day+=d-1;
    if(day%7==6||day%7==0){
        printf("Free.\n");
        return 0;
    }
    day=(day%7-(day-99)/91+9)%5;
    printf("%d and %d.\n",a[day][0],a[day][1]);
    
    return 0;
}
//2012 4 9
//2012 7 12 5 0
//2012 7 9 2 7
//

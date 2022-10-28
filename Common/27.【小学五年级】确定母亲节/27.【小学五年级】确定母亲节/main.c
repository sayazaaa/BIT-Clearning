#include <stdio.h>
int main() {
    int d=1,y,flag=0,day=0;
    scanf("%d",&y);
    if ((y%4==0&&y%100!=0)||y%400==0)
        flag=1;
    for (int i=1900;i<y;i++) {
        if ((i%4==0&&i%100!=0)||i%400==0)
            day+=366;
        else
            day+=365;
    }
    day+=120+flag+d;
    if (day%7==0)
        printf("8\n");
    else
        printf("%d\n",15-day%7);
    return 0;
}

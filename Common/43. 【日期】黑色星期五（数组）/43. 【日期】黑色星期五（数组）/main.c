#include <stdio.h>
int main() {
    int d=13,m,y,flag=0,day=0;
    int a[13]={0},count=0;
    if(1!=scanf("%d",&y)){
        return 0;
    }
    for (int i=1; i<=12; i++) {
        day=0;
        m=i;
        if ((y%4==0&&y%100!=0)||y%400==0)
            flag=1;
        for (int p=1900;p<y;p++) {
            if ((p%4==0&&p%100!=0)||p%400==0)
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
        if (day%7==5) {
            a[count++]=i;
        }
    }
    int i=0;
    if (a[0]!=0) {
        while (a[i++]!=0);
        i--;
        if (i==1) {
            printf("There is %d Black Friday in year %d.\nIt is:\n",i,y);
            printf("%d/%d/13\n",y,a[0]);
        }
        else{
            printf("There are %d Black Fridays in year %d.\nThey are:\n",i,y);
            for (int j=0; j<i; j++) {
                printf("%d/%d/13\n",y,a[j]);
            }
        }
    }
    return 0;
}
//There are 2 Black Fridays in year 2006.
//They are:
//2006/1/13
//2006/10/13

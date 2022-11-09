#include <stdio.h>
int main(){
    int year,month,day,w;
    scanf("%d %d %d",&year,&month,&day);
    if((1==month)||(2==month)){
        month=month+12;
        year=year-1;
    }
    w=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;
    printf("%d\n",w);
    return 0;
}

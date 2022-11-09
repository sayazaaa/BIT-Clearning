#include <stdio.h>
#include <math.h>
int main(){
    double x,y;
    int a;
    char e;
    scanf("%lf %c %d",&x,&e,&a);
    y=x*pow(10,a);
    printf("%.8lf\n",y);
    return 0;
}

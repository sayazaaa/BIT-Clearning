#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,d;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a==0) {
        if (b==0)
            printf("Input error!\n");
        if (b!=0)
            printf("x=%.6lf\n",-(c/b)==-0?0:-(c/b));
    }else{
        d=(b*b)-4*a*c;
        if (d==0||(b==0&&c==0))
            printf("x1=x2=%.6lf\n",-b/2/a==-0?0:-b/2/a);
        if (d>0)
            printf("x1=%.6lf\nx2=%.6lf\n",(-b+sqrt(d))/2/a,(-b-sqrt(d))/2/a);
        if (d<0) {
            if (b==0)
                printf("x1=%.6lfi\nx2=-%.6lfi\n",sqrt(c/a),sqrt(c/a));
            else
                printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%.6lfi\n",-b/2/a,sqrt(-d)/2/a,-b/2/a,sqrt(-d)/2/a);
        }
    }
    return 0;
}

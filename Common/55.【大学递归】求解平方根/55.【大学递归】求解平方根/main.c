#include <stdio.h>
double mysqrt(double x,double p,double e);
double fun(double a){
    return a>0?a:-a;
}
int main() {
    int e;
    double x,d=1;
    if (2!=scanf("%lf 1e %d",&x,&e)) {
        return 0;
    }
    for (int i=0; i<(-1*e); i++) {
        d/=10;
    }
    printf("%.8lf\n",mysqrt(x,1,d));
    return 0;
}
double mysqrt(double x,double p,double e){
    if (fun(p*p-x)<e) {
        return p;
    }
    return mysqrt(x, 0.5*(p+x/p), e);
}

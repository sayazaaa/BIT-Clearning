#include <stdio.h>
int main() {
    double r,h;
    double pai=3.1415926;
    scanf("%lf%lf",&r,&h);
    printf("s=%.2lf,v=%.2lf\n",2*pai*r*h,pai*r*r*h);
    return 0;
}

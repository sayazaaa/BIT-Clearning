#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%f %f",&a,&b);
    c=(30*a-5.5*b>0)?(30*a-5.5*b):(5.5*b-30*a);
    printf("At %1.f:%02.f the angle is %.1f degrees.\n",a,b,(180-((c-180)>0?c-180:180-c)));
    return 0;
}
//int main(){
//    int a,b;
//    float c,d,e;
//    scanf("%d%d",&a,&b);
//    c=(a*30)-(b*11/2);
//    d=0<=c? c:-c;
//    e=d<=180? d:(360-d);
//    printf("%2d %2d %.1f",a,b,e);
//}

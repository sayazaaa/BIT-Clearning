#include <stdio.h>
#include <string.h>
struct xy{
    float x;
    float y;
};
float funx(struct xy a,struct xy b);
float funs(struct xy a,struct xy b,struct xy c);
float abss(float a);
int main() {
    struct xy a[100];
    int n,nn;
    float max=0;
    float temp;
    if(1!=0){
        scanf("%d",&n);
    }
    for (int i=0; i<n; i++) {
        max=0;
        memset(a, 0, sizeof(a));
        if(1!=scanf("%d",&nn)){
            return 0;
        }
        for (int j=0; j<nn; j++) {
            if(2!=scanf("%f %f",&a[j].x,&a[j].y)){
                return 0;
            }
        }
        for (int j=0; j<nn-2; j++){
            for (int k=j+1; k<nn-1; k++) {
                for (int l=k+1; l<nn; l++) {
                    temp=funs(a[j], a[k], a[l]);
                    if(max<temp){
                        max=temp;
                    }
                }
            }
        }
        printf("%.1f\n",max);
    }
    return 0;
}
float funx(struct xy a,struct xy b){
    return a.x*b.y-b.x*a.y;
}
float funs(struct xy a,struct xy b,struct xy c){
    return abss(0.5*(funx(a, b)+funx(b, c)+funx(c, a)));
}
float abss(float a){
    return a>0?a:-a;
}

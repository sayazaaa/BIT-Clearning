#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    float w,l,x1,y1,x2,y2;
    char a[1100]={0};
    if(7!=scanf("%f %f %f %f %f %f %s",&w,&l,&x1,&y1,&x2,&y2,a)){
        return 0;
    }
    for (int i=0; i<strlen(a); i++) {
        switch (a[i]) {
            case 'F':y1=-y1;
                break;
            case 'B':y1=2*l-y1;
                break;
            case 'L':x1=-x1;
                break;
            case 'R':x1=2*w-x1;
                break;
            default:puts("error");
        }
    }
    printf("%.4f\n",sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1)));
    return 0;
}

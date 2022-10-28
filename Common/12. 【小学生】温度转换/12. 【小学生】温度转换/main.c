#include <stdio.h>
int main() {
    float x,y;
    scanf("%f%f",&x,&y);
    if (x==1) {
        y=(y-32)*5/9;
        printf("The Centigrade is %.2f\n",y);
    }
    else{
        y=(y*9/5)+32;
        printf("The Fahrenheit is %.2f\n",y);
    }
    return 0;
}

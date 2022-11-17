#include <stdio.h>
int main() {
    int a,b,c,d,e,f,g;
    if(7!=scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g)){
        return 0;
    }
    printf("%d\n",a-b-c-d+e+f+g);
    return 0;
}

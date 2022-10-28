#include <stdio.h>
int main() {
    char arr[20];
    for (int i=0; i<13; i++) {
        if(1!=scanf("%c",&arr[i])){
            return 0;
        }
        if ('\0'==arr[i]) {
            break;
        }
    }
    int a,b,c;
    a=arr[0]+arr[3]+arr[5]+arr[8]+arr[10]+arr[12]-288;
    b=arr[2]+arr[4]+arr[6]+arr[9]+arr[11]-240;
    c=9-((3*a+b-1)%10);
    printf("%d\n",c);
    return 0;
}


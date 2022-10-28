#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (96<a&&123>a) {
        printf("%c\n",a-32);
    }
    else if (64<a&&91>a){
        printf("%c\n",a+32);
    }
    else
        printf("%c\n",a);
    return 0;
}

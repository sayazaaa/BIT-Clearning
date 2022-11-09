#include <stdio.h>
#include <string.h>
int reverse(char *a);
int main() {
    char a[1000];
    gets(a);
    if (reverse(a)) {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
int reverse(char *a){
    char *b=a;
    while (*++a) ;
    a--;
    if (b==a) {
        return 1;
    }
    if (*b==*a) {
        *a=0;
        return reverse(b+1);
    }
    return 0;
}

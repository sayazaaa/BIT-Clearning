#include <stdio.h>
#include <string.h>
#include <ctype.h>
void pp(int *ll, int rr, char *s) {
    while (*ll < rr - 1) {
        putchar(s[++*ll]);
    }
    puts("");
}
void fun(int l, int r, char *s) {
    static int ll, rr;
    while (s[l] == s[r] && isalpha(s[l]) && isalpha(s[r])){
        l--;r++;
    }
    if (r - l > 2 || l == strlen(s) - 1){
        (ll!=rr)&&((r>rr&&l<rr&&l>ll)||l==strlen(s)-1||l>rr)?pp(&ll,rr,s):0;
        if (rr < r){
            ll = l;
            rr = r;
        }
    }
}
int main() {
    char s[200] = {'#'};
    gets(s + 1);
    for (int i = 1; i < strlen(s); i++) {
        fun(i - 1, i + 1, s);
        fun(i , i + 1, s);
    }
    return 0;
}

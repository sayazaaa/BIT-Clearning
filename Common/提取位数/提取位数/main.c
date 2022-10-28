#include <stdio.h>
#define mp(a)
int main(){
    mp(789678);
    return 0;
}







int mp(int a){
    char c=0;
    scanf("%c", &c);
    if( c != '\n'){
        printf("%c\n",c);
        a+=c;
        mp(scanf("%c", &c));
    }
    return 0;
}

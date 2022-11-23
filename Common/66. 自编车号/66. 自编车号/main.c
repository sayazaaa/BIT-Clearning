#include <stdio.h>
int main() {
    char a;
    int flag = 0,count=0;
    for (int i=0; i<5; i++) {
        a=getchar();
        if(a=='I'||a=='O'||(i==4&&(a<'0'||a>'9'))){
            flag=1;
            break;
        }
        if(a>='A'&&a<='Z'){
            count++;
        }
    }
    if(flag||count!=2){
        puts("no.");
    }
    else{
        puts("ok.");
    }
    return 0;
}

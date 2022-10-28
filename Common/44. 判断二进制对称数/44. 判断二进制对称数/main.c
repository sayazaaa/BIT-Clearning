#include <stdio.h>
#include <string.h>
char* rev(char* str);
int main() {
    int a,i=0;
    char b[50];
    memset(b, 0, 50);
    if (1!=scanf("%d",&a)) {
        return 0;
    }
    int out=a;
    
    while (a) {
        b[i]=(a%2+'0');
        i++;
        a/=2;
    }
    
    char brev[50];
    memset(brev, 0, 50);
    i=0;
    while (b[i]!='\0') {
        brev[i]=b[i];
        i++;
    }
    rev(b);
    i=0;
    while ((b[i]==brev[i])&&(b[i]!='\0')){
        i++;
    }
    if (b[i]=='\0') {
        printf("Yes!\n%d=%s\n",out,b);
    }
    else{
        printf("No.\n");
    }
    return 0;
}
char* rev(char* str){
    int i=0;
    int j=(int)strlen(str)-1;
    char temp=0;
    while (i<j){
        temp=*(str+i);
        *(str+i)=*(str+j);
        *(str+j)=temp;
        i++;j--;
    }
    return str;
}

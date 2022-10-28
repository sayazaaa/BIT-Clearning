#include <stdio.h>
#include <string.h>
char* reverse(char* str);
char* compare(char str1[],char str2[],int sign);
void plus(char a[],char b[]);
void minus(char a[],char b[]);
int main() {
    int n;
    if (1!=scanf("%d",&n)) {
        return 0;
    }
    for (int count=0; count<n; count++) {
        char input[1010],str1[510],str2[510];
        char op;
        if (1!=scanf("%s",input)) {
            return 0;
        }
        int i=0,str2_input=0;
        while (1) {
            str1[i]=input[i];
            if (input[i++]<'0') {
                break;
            }
        }
        str1[--i]='\0';
        op=input[i];
        while (input[i]!='\0') {
            i++;
            str2[str2_input++]=input[i];
        }
        str2[i]='\0';
        switch (op) {
            case '+':
                plus(compare(str1, str2, 1),compare(str1, str2, 0));
                break;
            case '-':
                if (str1==compare(str1, str2, 0)) {
                    printf("-");
                }
                minus(compare(str1, str2, 1),compare(str1, str2, 0));
                break;
        }
    }
    return 0;
}
void plus(char a[],char b[]){
    a=reverse(a);
    b=reverse(b);
    int lena=(int)strlen(a);
    int lenb=(int)strlen(b);
    char c[510];
    memset(c,0,510);
    int i=0;
    for (; i<lena; i++) {
        c[i]+=a[i]+((i>lenb-1)?0:b[i]-48);
        if (c[i]>'9') {
            c[i]-=10;
            if (lena==i+1) {
                printf("1");
            }
            else{
            c[i+1]++;
            }
        }
    }
    printf("%s\n",reverse(c));
}
void minus(char a[],char b[]){
    reverse(a);reverse(b);
    int lena=(int)strlen(a);
    int lenb=(int)strlen(b);
    char c[510];
    memset(c,0,510);
    int i=0;
    for (; i<lena; i++) {
        c[i]+=a[i]-((i>lenb-1)?0:b[i]-48);
        if (c[i]<'0') {
            c[i]+=10;
            c[i+1]--;
        }
    }
    reverse(c);
    int m=1;
    for (i=0;i<lena; i++) {
        if (c[i]!='0'||!m) {
            printf("%c",c[i]);
            m=0;
        }
    }
    if (m) {
        printf("0");
    }
    printf("\n");
}
char* reverse(char* str){
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
char* compare(char str1[],char str2[],int sign){
    int i=0;
    if (strlen(str1)>strlen(str2)) {
        return sign?str1:str2;
    }
    else if (strlen(str1)<strlen(str2)){
        return sign?str2:str1;
    }
    else{
        while(str1[i]==str2[i]&&str1[i]&&str2[i]){
            i++;
        }
        if (str1[i]>=str2[i]) {
            return sign?str1:str2;
        }
        else{
            return sign?str2:str1;
        }
    }
}
//34556-60
//65543-06

//            if (lena==i+1) {
//                printf("?");
//            }

//    int m=0;
//    while (c[i++]!='0') {
//
//    }
//    printf("%s\n",c);

//int ctoi(char a){
//    if (a<58) {
//        a-=48;
//    }
//    else{
//        a-=55;
//    }
//    return a;
//}

//11
//56789+56789
//45555+44445
//1+12345
//12345+1
//98765-98760
//12345-9876
//12345-12345
//12345-12346
//1-54321
//0-0
//0+0
//
//113578
//90000
//12346
//12346
//5
//2469
//0
//-1
//-54320
//0
//0

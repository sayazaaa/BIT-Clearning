#include <stdio.h>
#include <string.h>
int toNum(char ch){
    return ch>='a'&&ch<='z'?(ch-'a')*2+1:(ch-'A')*2;
    //nb
}
int insertion(int a[],int len);
int main() {
    char input[100];
    char upp[100];
    char dow[100];
    memset(upp, 0, 100);
    memset(dow, 0, 100);
    if (1!=scanf("%s",input)) {
        return 0;
    }
    int i=0,j=0;
    int inputlen=(int)strlen(input);
    for (int loop=0; loop<inputlen; loop++) {
        if (input[loop]<96) {
            upp[i]=input[loop];
            i++;
        }
        else{
            dow[j]=input[loop];
            j++;
        }
    }
    int key;
    j=0;
    key=0;
    for (int i=1; i<strlen(upp); i++) {
        j=i;
        key = upp[i];
        while (upp[j-1]>key) {
            upp[j]=upp[j-1];
            j--;
        }
        upp[j]=key;
    }
    key=0;
    for (int i=1; i<strlen(dow); i++) {
        j=i;
        key = dow[i];
        while (dow[j-1]>key) {
            dow[j]=dow[j-1];
            j--;
        }
        dow[j]=key;
    }
    i=0;j=0;
    for (int pp=0; pp<strlen(input); pp++) {
        if ((((upp[i]-64)>(dow[j]-96))||(upp[i]==0))&&dow[i]!='\0') {
            printf("%c",dow[j]);
            j++;
        }
        if (( ( (upp[i]-64)<(dow[j]-96))||(dow[i]==0))&&upp[i]!='\0'){
            printf("%c",upp[i]);
            i++;
        }
        if(((upp[i]-64)==(dow[j]-96))&&upp[i]!='\0'&&dow[i]!='\0'){
            while (upp[i+1]==upp[i]&&upp[i]!='\0') {
                printf("%c",upp[i]);
                i++;
            }
            if (upp[i]) {
                printf("%c",upp[i]);
            }
            if (dow[j]) {
                printf("%c",dow[j]);
            }
            
            i++;j++;
        }
    }
    printf("\n");
    return 0;
}

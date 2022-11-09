/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */
 
#include <stdio.h>
#include <stdlib.h>
  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
  
char *resort(char *a);
int main(int argc, char *argv[]) {
          
    char a[100];
    gets(a);
    puts(resort(a));
    return 0;
}
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
int resor(char *a,int s,int e){
    char *ss=a+s;
    char *ee=a+e;
    char mid=*(a+(s+e)/2);
    char temp;
    while (ss<=ee) {
        while (*(ss++)<mid);
        while (*(ee--)>mid);
        ss--;ee++;
        if (ss<=ee) {
            temp=*ss;
            *ss=*ee;
            *ee=temp;
            ss++;ee--;
        }
    }
    if (s<ee-a) {
        resor(a,s,ee-a);
    }
    if (ss-a<e) {
        resor(a,ss-a,e);
    }
    return 0;
}
char *resort(char *a){
    char *b=a;
    while (*++b!=0);
    b--;
    resor(a,0,b-a);
    return a;
}

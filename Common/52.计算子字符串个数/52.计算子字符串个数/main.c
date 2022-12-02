/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */
 
#include <stdio.h>
  
int countsub( char *str, char *ss );

main( )
{
    char s1[1000] = {0}, s2[100] = {0};
    gets(s1);
    gets(s2);
    printf("%d\n", countsub( s1, s2 ) );
}
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
int countsub( char *str, char *ss ){
    int c=0,max=0;
    char *p=str,*q=ss;
    while (*str) {
        p=str++;q=ss;
        c=0;
        while (*p++==*q++) {
            if(!*q){
                q=ss;
                c++;
            }
        }
        if (max<c) {
            max=c;
        }
    }
    return max;
}

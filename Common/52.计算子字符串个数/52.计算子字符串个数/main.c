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
#include <string.h>
int countsub( char *str, char *ss ){
    int i=0,count=0,max=0,flag=1;
    int len=(int)strlen(ss);
    while ( *(str+len-1)!=0) {
        flag=1;
        
        for (i=0; i<len&&*str++==*(ss+i); i++) {
            flag=0;
        }
        if (i==len) {
            count++;
        }
        if (max<count) {
            max=count;
        }
        if (flag) {
            count=0;
        }
    }
    return max;
}

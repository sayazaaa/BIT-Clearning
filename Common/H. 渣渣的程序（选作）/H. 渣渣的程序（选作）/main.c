#include <stdio.h>
#include <string.h>
void pt(int tab);
int main() {
    char a[10000];
    char b[10000];
    int i=0,len,flag=1,tab=0;
    int rou=0;
    memset(a, 0, 10000);
    memset(b, 0, 10000);
    while (1) {
        if (gets(b)==NULL) {
            break;
        }
        for (int j=0; b[j]!='\0'; j++) {
            a[i]=b[j];
            i++;
        }
    }
    i=0;flag=1;
    len=(int)strlen(a);
    while (i<len) {
        if(a[i]=='#'){
            printf("#");
            i++;
            for (; a[i-1]!='>'; i++) {
                if (a[i]!='\0') {
                    printf("%c",a[i]);
                }
            }
            printf("\n");
            continue;
        }
        //{
        if (a[i]==123) {
            //            pt(tab);
            tab++;
            printf("{\n");
            if (a[i+1]==125) {
                tab--;
            }
            pt(tab);
            i++;
            continue;
        }
        //}
        if (a[i]==125) {
            printf("}\n");
            
            if (a[i+1]==125) {
                tab--;
            }
            i++;
            pt(tab);
            continue;
        }
        if (a[i]==';') {
            printf(";\n");
            if (a[i+1]==125) {
                tab--;
            }
            pt(tab);
            i++;
            continue;
        }
        if ( (a[i-3]=='f') && (a[i-2]=='o') && (a[i-1]=='r') ) {
            for (; rou!=0||a[i]==' '||a[i]=='('; i++) {
                if (a[i]=='(') {
                    rou++;
                }
                if (a[i]==')') {
                    rou--;
                }
                if (a[i]!='\0') {
                    printf("%c",a[i]);
                }
            }
            printf("\n");
            
            pt(tab);
            continue;
        }
        if ( a[i-1]==40  ) {
            rou++;
            for (; rou!=0||a[i]==' '||a[i]=='('; i++) {
                if (a[i]=='(') {
                    rou++;
                }
                if (a[i]==')') {
                    rou--;
                }
                printf("%c",a[i]);
            }
            if (a[i]=='{') {
                printf("\n%c\n",a[i]);
                tab++;
                i++;
                pt(tab);
            }
            if(a[i]==0){
                printf("\n");
                pt(tab);
            }
            if (a[i]==125) {
                tab--;
                pt(tab);
            }
            
            continue;
        }
        
        //        if ( a[i-1]==40  ) {
        //            rou++;
        //            for (; rou!=0||a[i]==' '||a[i]=='('; i++) {
        //                if (a[i]=='(') {
        //                    rou++;
        //                }
        //                if (a[i]==')') {
        //                    rou--;
        //                }
        //                printf("%c",a[i]);
        //            }
        //            if (a[i]==';') {
        //                printf(";\n");
        //                i++;
        //                flag=1;
        //                continue;
        //            }
        //            else{
        //                printf("\n");
        //                flag=1;
        //                continue;
        //            }
        //
        //        }
        //        if (a[i]==';') {
        //            i++;
        //            printf(";\n");
        //            flag=1;
        //            continue;
        //        }
        //        if (a[i]=='{') {
        //            i++;
        //            pt(tab++);
        //            printf("{\n");
        //            flag=1;
        //            continue;
        //        }
        //        if (a[i]=='}') {
        //            i++;
        //            pt(--tab);
        //            printf("}\n");
        //            flag=1;
        //            continue;
        //        }
        printf("%c",a[i]);
        i++;
    }
    return 0;
}
void pt(int tab){
    for (int i=0; i<tab; i++){
        printf("    ");
    }
}
/*
 void pt(int tab){for (int i=0; i<tab; i++){printf("    ");}}
 */
//            if ( (a[i-3]=='f') && (a[i-2]=='o') && (a[i-1]=='r') ) {
//                for (; rou!=0||a[i]==' '||a[i]=='('; i++) {
//                    if (a[i]=='(') {
//                        rou++;
//                    }
//                    if (a[i]==')') {
//                        rou--;
//                    }
//                    printf("%c",a[i]);
//                }
//                printf("\n");
//                continue;
//            }
//            if ( (a[i-2]=='t') && (a[i-1]=='f') && (a[i-3]=='n') ) {
//                for (; rou!=0||a[i]==' '||a[i]=='('; i++) {
//                    if (a[i]=='(') {
//                        rou++;
//                    }
//                    if (a[i]==')') {
//                        rou--;
//                    }
//                    printf("%c",a[i]);
//                }
//                continue;
//            }
//

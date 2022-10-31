#include <iostream>
#include <cstring>
using namespace std;
char pro[100][1000];
int main(){
    int i=0;
    while(gets(pro[i])!=NULL){
        i++;
    }
    int n=0,len,t1=1,mf=0;
    for(int j=0;j<i;j++){
        len=strlen(pro[j]);
        for(int k=0;k<len;k++){
            if(pro[j][k]=='>'||(pro[j][k]==';'&&mf!=4)){
                printf("%c",pro[j][k]);
                t1=0;
                if(k<len-1){
                    if(pro[j][k+1]!='{'){
                        printf("\n");
                    }
                }
                else if(k==len-1){
                    if(pro[j+1][k]!='}'){
                        printf("\n");
                    }
                }
            }
            else  if(pro[j][k]=='{'){
                printf("\n");
                for(int t=1;t<=n;t++){
                    printf("    ");
                }
                printf("%c",pro[j][k]);
                n++;
                t1=0;
                if(k<len-1){
                    if(pro[j][k+1]!='{'){
                        printf("\n");
                    }
                }
            }
            else if(k==len-1){
                if(pro[j+1][k]!='{'){
                    printf("\n");
                }
            }
            else if(pro[j][k]=='}'){
                n--;
                for(int t=1;t<=n;t++){
                    printf("    ");
                }
                printf("%c\n",pro[j][k]);
            }
            else if(t1==0&&pro[j][k]!='>'&&pro[j][k]!='{'&&pro[j][k]!='}'){
                for(int t=1;t<=n;t++){
                    printf("    ");
                }
                printf("%c",pro[j][k]);
                t1=1;
                if(pro[j][k]=='f'&&pro[j][k+1]=='o'&&pro[j][k+2]=='r'&&pro[j][k+3]=='('){
                    mf=4;
                }
                else if(mf==4&&pro[j][k]==')')  {
                    mf=0;
                }
            }
            else if(t1!=0&&pro[j][k]!='>'&&pro[j][k]!='{'&&pro[j][k]==')')  {
                mf=0;
            }
        }
    }
}
return 0;
}

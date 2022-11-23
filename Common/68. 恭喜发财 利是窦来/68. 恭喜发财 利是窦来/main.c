#include <stdio.h>
#include <string.h>
struct adult{
    char name[20];
    int money;
};
int main() {
    int npeople;
    struct adult people[100]={0};
    char temp[20];
    int j=0;
    int num,tmoney;
    scanf("%d",&npeople);
    for (int i=0; i<npeople; i++) {
        scanf("%s",people[i].name);
    }
    for (int i=0; i<npeople; i++) {
        scanf("%s",temp);
        j=0;num=0;
        for (; j<npeople; j++) {
            if(strcmp(temp, people[j].name)==0){
                break;
            }
        }
        scanf("%d",&tmoney);
        people[j].money-=tmoney;
        scanf("%d",&num);
        if(num==0){
            continue;
        }
        if(tmoney){
            people[j].money+=tmoney%num;
        }
        tmoney/=num;
        for (j=0; j<num; j++) {
            scanf("%s",temp);
            for (int l=0; l<npeople; l++) {
                if(strcmp(temp, people[l].name)==0){
                    people[l].money+=tmoney;
                    break;
                }
            }
        }
    }
    for (int i=0; i<npeople; i++) {
        printf("%s %d\n",people[i].name,people[i].money);
    }
    return 0;
}

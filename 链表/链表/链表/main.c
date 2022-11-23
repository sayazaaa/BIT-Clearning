#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int toDisplayError();
int toDisplayMenu();
int toSayBye();
PHEADNODE toCreateList();
PHEADNODE  toCreateReverseList();
int toDisplaylist(PHEADNODE head);
PNODE  toSearchANode(PHEADNODE head);
int toDeleteTheNode(PHEADNODE head,PNODE found);
int toSayMessage(char message[]);
int main(int argc, char *argv[]) {
    
    PHEADNODE head = NULL;
    char message[100]="";
    int flag = 1;
    char option;
    PNODE found = NULL;
    while(flag) {
        toDisplayMenu();
        option = getchar();
        switch(option) {
            case '1':
                if (NULL == head) {
                    head = toCreateList();
                    toDisplaylist(head);
                } else {
                    strcpy(message,"You had a list!");
                    toSayMessage(message);
                }
                break;
            case '2':
                if (NULL == head) {
                    head = toCreateReverseList();
                    toDisplaylist(head);
                } else {
                    strcpy(message,"You had a list!");
                    toSayMessage(message);
                }
                break;
            case '3':
                if (NULL == head) {
                    strcpy(message,"You had NO list!");
                    toSayMessage(message);
                } else {
                    found = toSearchANode(head);
                    if (found != NULL) {
                        toDeleteTheNode(head,found);
                        toDisplaylist(head);
                    }
                }
                break;
            case '4':break;
            case '5':break;
            case '6':
                if (NULL == head) {
                    strcpy(message,"Are you Crazy£ø!");
                    toSayMessage(message);
                } else {
                    found = toSearchANode(head);
                }
                break;
            case '7':break;
            case '0':
                toSayBye();
                flag = 0;
                break;
            default:
                toDisplayError();
                break;
        }
    }
    
    
    return 0;
}

int toDisplayMenu() {
    system("cls");
    printf("******************************\n");
    printf("*1:create a new list         *\n");
    printf("*2:create a new reverse list *\n");
    printf("*3:delete a node             *\n");
    printf("*4:add a node                *\n");
    printf("*5:insert a node             *\n");
    printf("*6:search a node             *\n");
    printf("*7:clear a list              *\n");
    printf("*0:exit                      *\n");
    printf("******************************\n");
    printf("please input an option:");
    return 0;
}
int toSayBye() {
    system("cls");
    printf("******************************\n");
    printf("*                            *\n");
    printf("*                            *\n");
    printf("*         Bye Bye!           *\n");
    printf("*                            *\n");
    printf("*        Go  good!           *\n");
    printf("*                            *\n");
    printf("*                            *\n");
    printf("******************************\n");
    return 0;
}
int toSayMessage(char message[]) {
    system("cls");
    printf("******************************\n");
    printf("*                            *\n");
    printf("*                            *\n");
    printf("*  %s           *\n",message);
    printf("*                            *\n");
    printf("*        Go  good!           *\n");
    printf("*                            *\n");
    printf("*                            *\n");
    printf("******************************\n");
    system("PAUSE");
    return 0;
    
}
int toDisplayError(){
    system("cls");
    printf("******************************\n");
    printf("*                            *\n");
    printf("*                            *\n");
    printf("*    Are you Playing ?       *\n");
    printf("*                            *\n");
    printf("*   What do you want to do?  *\n");
    printf("*                            *\n");
    printf("*       Go out!              *\n");
    printf("******************************\n");
    getchar();
    return 0;
}
int toDisplaylist(PHEADNODE head) {
    PNODE p = head->next;
    if ( NULL == p) {
        printf("No NODES,Unhappy!\n");
    } else {
        printf("%d NODES\n",head->count);
        while(p!=NULL)  {
            if (p->next==NULL)  {
                printf("%d\n",p->keyvalue);
            } else {
                printf("%d=>",p->keyvalue);
            }
            p=p->next;
        }
    }
    system("PAUSE");
    return 0;
}
PHEADNODE toCreateList() {
    PHEADNODE head = (PHEADNODE) malloc(sizeof(HEADNODE));
    head->count = 0;
    head->next = NULL;
    PNODE p;
    int count = 0;
    while (count < 1) {
        system("cls");
        printf("How many nodes do you want?\n");
        scanf("%d",&count);
    }
    
    for(int i = 0;i<count;i++) {
         p = (PNODE)malloc(sizeof(NODE));
         head->count++;
         scanf("%d",&p->keyvalue);
         p->next = head->next;
         head->next = p;
    }
    return head;
}
PHEADNODE toCreateReverseList() {
    PHEADNODE head = (PHEADNODE) malloc(sizeof(HEADNODE));
    head->count = 0;
    head->next = NULL;
    PNODE p;
    PNODE tail;
    int count = 0;
    while (count < 1) {
        system("cls");
        printf("How many nodes do you want?\n");
        scanf("%d",&count);
    }
    
    for(int i = 0;i<count;i++) {
        p = (PNODE)malloc(sizeof(NODE));
        head->count++;
        scanf("%d",&p->keyvalue);
        if (NULL == head->next) {
            head->next = p;
            p->next=NULL;
            tail = p;
        } else {
            p->next = NULL;
            tail->next = p;
            tail = p;
        }
    }
    return head;
}
PNODE  toSearchANode(PHEADNODE head) {
    if (head->next == NULL) {
        printf("NO NODES\n");
        return NULL;
    }
    system("cls");
    printf("Please input keyvalue:\n");
    int keyvalue;
    scanf("%d",&keyvalue);
    PNODE p = head->next;
    while(p!= NULL && p->keyvalue != keyvalue) {
//        printf("%d,(%p)\n",p->keyvalue,p->next);
//        system("PAUSE");
        p=p->next;
    }
    if (p == NULL) {
        printf("NO NODE Found\n");
        system("PAUSE");
        return 0;
    } else {
        printf("Found\n");
        system("PAUSE");
        return p;
    }
}
int toDeleteTheNode(PHEADNODE head,PNODE found){
    PNODE p;
    if (head->next == NULL) {
        return 0;
    } else {
        if (head->next == found) {
            head->next = found->next;
            free(found);
            head->count--;
        } else {
            p = head->next;
            while(p->next != found) {
                p= p->next;
            }
            p->next=found->next;
            free(found);
            head->count--;
        }
    }
    return 0;
}

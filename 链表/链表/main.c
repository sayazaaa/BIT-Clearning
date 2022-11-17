#include <stdio.h>
#include <stdlib.h>
int main() {
    typedef struct node {
        int key;
        char name[20];
        struct node* next;
    }NODE;
    typedef struct node* PNODE;
    int i=0;
    PNODE p;
    PNODE head;
    head = (NODE*)malloc(sizeof(NODE));
    head->next = NULL;
    while (i<10) {
        
        p = (NODE*) malloc(sizeof(NODE));
        p -> next = head->next;
        p -> key = ++i;
        head->next = p;
    }
    p = head->next;
    while (p!=NULL) {
        printf("%d\n",p->key);
        p=p->next;
    }
    
    return 0;
}

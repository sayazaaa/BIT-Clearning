/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>
typedef struct numLink
{
    int no;
    struct numLink *next;
}NODE;

NODE *monenode( NODE *head, int m );

void SetLink( NODE *h, int n )
{
    NODE *p=NULL, *q=NULL;
    int i;
    for( i=0; i<n; i++)
    {
        p = (NODE *)malloc(sizeof(NODE));
        p->no = i+1;
        p->next = NULL;
        if( h->next == NULL )
        {
            h->next = p;
            q = p;
        }
        else
        {
            q->next = p;
            q = q->next;
        }
    }
    return;
}

int main( )
{
    int n,m;
    NODE *head=NULL, *q=NULL;
    scanf("%d%d",&n,&m);
    head = (NODE *)malloc(sizeof(NODE));
    head->no = -1;
    head->next = NULL;

    SetLink( head, n );

    q = monenode( head, m );

    do
    {
        printf("%d ",q->next->no);
        q = q->next;
    }while( q->next != NULL );
    printf("\n");
    return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
NODE *monenode( NODE *head, int m ){
    NODE *p=head,*q=head;
    while (p->next!=NULL) {
        p=p->next;
    }
    p->next=head->next;
    for (int i=0; i<m; i++) {
        head=head->next;
    }
    q->next=head->next;
    head->next=NULL;
    return q;
}


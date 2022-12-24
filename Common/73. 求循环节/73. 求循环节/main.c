/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{   int         data;
    struct node * next;
} NODE;

NODE * find( NODE * , int * );
void outputring( NODE * );
void change( int , int , NODE * );

void outputring( NODE * pring )
{    NODE * p;
    p = pring;
    if ( p == NULL )
        printf("NULL");
    else
        do
        {    printf("%d", p->data);
            p = p->next;
        } while ( p != pring );
    printf("\n");
    return;

}

int main()
{   int n, m;
    NODE * head, * pring;

    scanf("%d%d", &n, &m);
    head = (NODE *)malloc( sizeof(NODE) );
    head->next = NULL;
    head->data = -1;

    change( n, m, head );
//    outputring( head->next );
    pring = find( head, &n );
    printf("ring=%d\n", n);
    outputring( pring );

    return 0;
}

/* Here is waiting for you.
void change( int n, int m, NODE * head )
{
}

NODE * find( NODE * head, int * n )
{
}
*/

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
int f(int n,int r[],int *l){
    int i=0;
    while (r[i++]!=n);
    *l=i;
    return r[i];
}
void change( int n, int m, NODE * head ){
    NODE *h=head,*p=(NODE*)malloc(sizeof(NODE));
    int r[1000]={0},t=0,l;
    h->next=p;
    h=h->next;
    p->data=n/m;
    r[t]=n%m;
    while (1) {
        t++;
        p=(NODE*)malloc(sizeof(NODE));
        r[t]=r[t-1]*10%m;
        p->data=r[t-1]*10/m;
        h->next=p;
        h=h->next;
        if (r[t]==0){
            h->next=NULL;
            break;
        }
        if(f(r[t],r,&l)) {
            for (int i=0; i<=l; i++) {
                head=head->next;
            }
            h->next=head;
            break;
        }
        
    }
}
NODE * find( NODE * head, int * n ){
    NODE *p[1000]={NULL};
    int i=0;
    while (head!=NULL) {
        p[i++]=head;
        head=head->next;
        for (int j=0; j<i; j++) {
            if (p[j]==head){
                *n=i-j;
                return head;
            }
        }
    }
    *n=0;
    return NULL;
}

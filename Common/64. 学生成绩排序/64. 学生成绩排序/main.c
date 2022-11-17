#include <stdio.h>
struct s{
    char name[30];
    int store;
};
int main() {
    struct s a[1000];
    struct s *p[1000],*temp;
    int n;
    if(1!=scanf("%d",&n)){
        return 0;
    }
    getchar();
    for (int i=0; i<n; i++) {
        scanf("%[^,], %d",a[i].name,&a[i].store);
        getchar();
        p[i]=&a[i];
    }
    int flag=1;
    for (int i=0; flag; i++) {
        flag=0;
        for (int j=0; j<n-1; j++) {
            if(p[j]->store<p[j+1]->store){
                flag=1;
                temp=p[j+1];
                p[j+1]=p[j];
                p[j]=temp;
            }
        }
    }
    for (int i=0; i<n; i++) {
        printf("%s,%d\n",p[i]->name,p[i]->store);
    }
    return 0;
}

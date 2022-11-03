#include <stdio.h>
int main() {
    int n;
    int a[60];
    if (1!=scanf("%d",&n)) {
        return 0;
    }
    for (int i=0; i<n; i++) {
        if (1!=scanf("%d",&a[i])) {
            return 0;
        }
    }
    int start=0,end=0;
    int buc[2]={0,0};
    int flag=1;
    int tag=1;
    for (int i=0; i<n; i++) {
        flag=1;
        for (; i<n; i++) {
            if (a[i]!=a[i+1]) {
                if (!flag) {
                    end=i;
                }
                break;
            }
            if (i==n-1) {
                end=i;
                break;
            }
            if (a[i]==a[i+1]&&flag) {
                start=i;
                flag=0;
            }
        }
        if (buc[1]-buc[0]<end-start) {
            buc[0]=start;
            buc[1]=end;
            tag=0;
        }
    }
    if (tag) {
        printf("No equal number list.\n");
    }
    else{
        printf("The longest equal number list is from %d to %d.\n",buc[0],buc[1]);
    }
    return 0;
}

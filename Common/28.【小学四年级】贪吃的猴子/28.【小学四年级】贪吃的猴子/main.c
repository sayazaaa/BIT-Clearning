#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    if (n == 1)
       printf("The monkey got 1 peach in first day.\n");
    else{
        for (a=2*n-3; n>1; n--)
            a*=2;
        printf("The monkey got %d peaches in first day.\n",a+2);
    }
  return 0;
}

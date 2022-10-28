#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

void reset(int a[]);
void prarr(int a[]);
int bubble(int a[],int len);
int selection(int a[],int len);
int insertion(int a[],int len);
int quick(int a[],int len);int quick_th(int a[],int start,int end);

int main() {
    int a[N];
    time_t start_t;
    time_t end_t;
    
    time(&start_t);
    reset(a);quick(a, N);
    time(&end_t);
    printf("%d\n",(int)difftime(end_t, start_t));
//    prarr(a);

    time(&start_t);
    reset(a);bubble(a, N);
    time(&end_t);
    printf("%d\n",(int)difftime(end_t, start_t));
//    prarr(a);
//
    time(&start_t);
    reset(a);selection(a, N);
    time(&end_t);
    printf("%d\n",(int)difftime(end_t, start_t));
//    prarr(a);
//
    time(&start_t);
    reset(a);insertion(a, N);
    time(&end_t);
    printf("%d\n",(int)difftime(end_t, start_t));
//    prarr(a);
    
    return 0;
}


void reset(int a[]){
    clock_t t=clock();
    srand((unsigned int) t);
    for (int i=0; i<N; i++) {
        a[i]= rand() % 1000;
    }
}
void prarr(int a[]){
    for (int l=0; l<N; l++) {
        printf("%-5d",a[l]);
    }
    puts("");
}


int bubble(int a[],int len){
    int flag=1;
    int flagg=len-1;
    int temp;
    for (int i=0; flag; i++) {
        flag=0;
        for (int j=0; j<flagg; j++) {
            if (a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        flagg--;
    }
    return 0;
}
int selection(int a[],int len){
    int j,m,temp;
    for (int i=0; i<len-1; i++) {
        for (j=i+1,m=i; j<len; j++) {
            if (a[m]>a[j]) {
                m=j;
            }
        }
        temp=a[i];
        a[i]=a[m];
        a[m]=temp;
    }
    return 0;
}
int insertion(int a[],int len){
    int key;
    int j;
    for (int i=1; i<len; i++) {
        j=i;
        key = a[i];
        while (a[j-1]>key) {
            a[j]=a[j-1];
            j--;
        }
        a[j]=key;
    }
    return 0;
}


int quick_th(int a[],int start,int end){
    if (start>=end) {
        return 0;
    }
    int middle=a[start];
    int temp;
    int left=start+1,right=end;
    while (left<right) {
        
        while (a[left]<middle&&left<right) {
            left++;
        }
        while (a[right]>=middle&&left<right) {
            right--;
        }
        temp=a[left];
        a[left]=a[right];
        a[right]=temp;
    }
    if (a[start]>a[left]) {
        temp=a[left];
        a[left]=a[start];
        a[start]=temp;
    }
    quick_th(a, start, left-1);
    quick_th(a, left, end);
    return 0;
}
int quick(int a[],int len){
    quick_th(a, 0, len-1);
    return 0;
}

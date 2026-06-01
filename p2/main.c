#include <stdio.h>

int main()
{
    int N=0;
    int a[20]={};
    int b[20]={};
    int *p = nullptr, *q=nullptr;
    
    scanf("%d",&N);
    for(p=a; p<a+N; p++) scanf("%d", p);
    for(q=b; q<b+N; q++) scanf("%d", q);
    p=a;
    q=b+N-1;
    for(p=a;p<a+N;p++){
        printf(" %d",*p+ *q);
        q--;
    }

    return 0;

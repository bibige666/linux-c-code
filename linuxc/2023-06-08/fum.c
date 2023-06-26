#include <stdio.h>
int fun(int *,int *);
int main()
{
    int *p,i,j;
    scanf("%d%d",&i,&j);
    p=fun(&i,&j);
    printf("i=%d,j=%d,*p=%d\n",i,j,*p);
}
int *fun(int *a,int *b)
{
    if(*a>*b)return a;
    return b;
}

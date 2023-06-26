#include <stdio.h>
#include <stdlib.h>
int fun(int n)
{
    int* p;
    p=(int*)malloc(sizeof(int));
    *p=n;
    return *p;
}
int main(void)
{
    int a;
    a=fun(10);
    printf("%d\n",a+fun(10));
    return 0;
}

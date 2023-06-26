#include <stdio.h>
void fun(int a[],int n)
{
    int i,t;
    for(i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
}
int main(void)
{
    int k[10]={1,2,3,4,5,6,7,8,9,10},i;
    fun(k,5);
    for(i=2;i<8;i++)
        printf("%d",k[i]);
            printf("\n");
    return 0;
}

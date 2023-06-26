#include <stdio.h>
#define N 4
void fun(int a[][N], int b[])
{
    int i;
    for(i=0;i<N;i++)
    b[i]=a[i][i]-a[i][N-1-i];
}
int main(void)
{
    int x[N][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},y[N],i;
    fun(x,y);
    for(i=0;i<N;i++)
        printf("%d,",y[i]);
    printf("\n");
    return 0;
}

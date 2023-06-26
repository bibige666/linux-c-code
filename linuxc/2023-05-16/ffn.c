#include <stdio.h>
int f(int x);
    int main(void)
{
    int n=1,m;
    m=f(f(f(n)));
    printf("%d\n",m);
    return 0;
}
    int f(int x)
{ return x*2;}

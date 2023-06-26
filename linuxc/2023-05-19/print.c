#include <stdio.h>
int fun()
{
    static int x=1;
    x*=2;
    return x;
}
int main(void)
{
    int i,s=1;
    for(i=1;i<=3;i++) s*=fun();
    printf("%d\n",s);
    return 0;
}

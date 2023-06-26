#include <stdio.h>
int f(int n);
    int main(void)
{
    int a=3,s;
    s=f(a);
    s=s+f(a);
    printf("%d\n",s);
}
int f(int n)
{
    static int a=1;
    n+=a++;
    return n;
}

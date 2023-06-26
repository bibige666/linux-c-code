#include <stdio.h>
struct S
{
    int a,b;
}
data[2]={10,100,20,200};
int main(void)
{
    struct S p=data[1];
    printf("%d\n",++(p.a));
    return 0;
}

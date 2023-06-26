#include <stdio.h>
int main(void)
{
    int x,y,z;
    x=y=1;
    z=x++,y++,++y;
    printf("%d,%d,%d\n",x,y,z);
    return 0;
}

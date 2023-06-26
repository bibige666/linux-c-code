#include <stdio.h>
int main(void)
{
    float x;
    float *p=&x;
    printf("%p\n",p);
    return 0;
}

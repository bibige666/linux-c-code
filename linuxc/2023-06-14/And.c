#include<stdio.h>

int main()
{
    unsigned int a=0xfffff;
    a&=~(1<<6);
    printf("%u\n",a);
    return 0;
}

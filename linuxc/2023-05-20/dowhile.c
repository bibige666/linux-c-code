#include <stdio.h>
int main(void)
{
    char *s={"abc"};
    do
    {printf("%d\n",*s%10);++s;}
        while(*s);
        return 0;
}

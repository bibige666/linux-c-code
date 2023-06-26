#include<stdio.h>
int main(void)
{
    char c='a';
    printf("c=%c\n",c);
    printf("c=%hhd\n",c);
    c=98;
    printf("c=%c\n",c);
    printf("c=%hhd\n",c);

    c=c+1;
    printf("c=%c\n",c);
    printf("c=%hhd\n",c);
    return 0;
}

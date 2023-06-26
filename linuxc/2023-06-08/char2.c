#include<stdio.h>
int main()
{
    printf("hello\n");
    printf("abc\bhello\n");
    printf("abc\tdef\n");
    printf("abc\rdef\n");

    printf("\'hello\'\n");
    printf("\"hello\"\n");
    printf("%%hello\n");
    return 0;
}

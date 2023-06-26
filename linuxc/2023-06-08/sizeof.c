#include <stdio.h>
int main(void)
{
    printf("sizeof(char)=%lu\n",   sizeof(char));
    printf("sizeof(unsigned char)=%lu\n",sizeof(unsigned char));
    printf("sizeof(short)=%lu\n",sizeof(short));
    printf("sizeof(int)=%lu\n",sizeof(int));
    printf("sizeof(unsigned int)=%lu\n",sizeof(unsigned int));
    printf("sizeof(long)=%lu\n", sizeof(long));
    printf("sizeof(unsigend long)=%lu\n",sizeof(unsigned long));

    int var=100;
    printf("sizeof(var)=%lu\n",sizeof(var));
    printf("%lu,%lu\n",sizeof(15),sizeof(5+5));
    sizeof(var=520);
    printf("var=%d\n",var);
    return 0;
}

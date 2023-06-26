#include <stdio.h>
int main(void)
{
    printf("\n与运算(&):\n");
    printf("3&5=%d\n",3&5);
    printf("0x44&0xc1=%#x\n",0x44&0xc1);

    printf("\n或运算(|):\n");
    printf("3|5=%d\n",3|5);

    printf("0x44|0xc1=%#x\n",0x44|0xc1);

    printf("\n异或运算(^):\n");
    printf("3^5=%d\n",3^5);

    printf("0x44 ^ 0xc1=%#x\n",0x44^0xc1);

    printf("\n按位取反(~)-有陷阱:\n");
    printf("~0x5a=%#x\n",~0x5a);
    printf("~0x5a=%#hhx\n",~0x5a);
    return 0;
}

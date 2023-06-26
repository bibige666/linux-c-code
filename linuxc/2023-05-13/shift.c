#include <stdio.h>
int main(void){
    signed char num;
    printf("请输入一个[-128,127]之间的整数:\n ");
    scanf("%hhd",&num);
    printf("%d的二进制为:\n",num);
    for(int i=7;i>-0;i--)
    {
        printf("%d",(num>>i)&1);
    }
    return 0;
}

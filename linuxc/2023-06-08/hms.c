#include <stdio.h>
int main(void)
{
    int seconds;

    printf("请输入一个秒数:");
    scanf("%d",&seconds);
    printf("%d小时%d分钟%d秒\n",seconds/3600,seconds%3600/60,seconds%60);
    return 0;
}

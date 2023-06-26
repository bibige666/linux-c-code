#include <stdio.h>
int main(void)
{
 int age;
 long long seconds;
 printf("请输入你的年龄:");
 scanf("%d",&age);
 seconds=(long long)age*31560000;
 printf("你的年龄对应的秒数位:%lld秒\n",seconds);
 return 0;
}

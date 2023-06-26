#include <stdio.h>
#define MOLECULAR_MASS 3.0e-23//每个水分子的质量,单位克
#define QUART 950//1夸脱书的质量,单位克
int main(void)
{
 double quart;
 double molecules;//水分子的数量
 printf("请输入水的夸脱数: ");
 scanf("%lf",&quart);
 //计算水分子数量
 molecules=(quart *QUART)/MOLECULAR_MASS;
 printf("水分子的数量为 %.2e\n",molecules);
 return 0;
}

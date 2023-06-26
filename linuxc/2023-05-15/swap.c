#include <stdio.h>
void swap(int *a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("交换后%d,%d\n",*a,*b);
}
int main(void)
{
    printf("请输入两个数\n");
    int a=0,b=0;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("交换前%d,%d",a,b);
    swap(&a,&b);
    return 0;
}

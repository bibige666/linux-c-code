#include <stdio.h>
int main(void){
    int a=0;
    printf("input a integer:");
    scanf("%d",&a);

    printf("\n获取变量a的绝对值:\n");
    a=(a>=0)?a:(0-a);
    printf("变量a的绝对值未%d\n",a);
    return 0;
}

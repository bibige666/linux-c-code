#include <stdio.h>
int main(void)
{
    int num,count=0;
    printf("请输入一个整数\n");
    scanf("%d",&num);
    if(num==0){
        count=1;
    }else{
        while(num!=0){
        count++;
        num/=10;
        }
}
printf("该整数的位数为:%d\n",count);
return 0;
}

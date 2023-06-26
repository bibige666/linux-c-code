#include <stdio.h>
int main(void){
    float height_in_inches,height_in_cm;
    printf("请输入身高(以英寸为单位):");
    scanf("%f",&height_in_inches);
    height_in_cm=height_in_inches*2.54;
    printf("身高为%.2f厘米",height_in_cm);
    return 0;
}

#include <stdio.h>
int main(void)
{
    int cups;
    double fluid_ounces,tablespoons,teaspoons;

    printf("请输入杯数:");
    scanf("%d",&cups);

    fluid_ounces=cups *8;
    tablespoons=fluid_ounces/2;
    teaspoons=tablespoons * 3;
    printf("%d杯相当于%.2f品脱,%.2f蛊司,%.2f大汤勺,%.2f茶勺\n",cups,fluid_ounces/16,fluid_ounces,tablespoons,teaspoons);
    return 0;
}

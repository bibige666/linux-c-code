#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED_MAX 33
#define BLUE_MAX 16
#define RED_BALL_NUM 6

int main(void)
{
    
    srand((unsigned)time(NULL));
    int redBalls[RED_BALL_NUM];
    int blueBall;

    for(int i=0;i<RED_BALL_NUM;i++)
    {
    int ball=rand()%RED_MAX+1; 
    for(int j=0;j<i;j++){
        if(redBalls[j]==ball){
        ball=rand()%RED_MAX+1;
        j=-1;
        }
    }
    redBalls[i]=ball;
    }
    blueBall=rand()%BLUE_MAX+1;
    printf("本次开奖结果: ");
    for(int i=0;i<RED_BALL_NUM;i++){
        printf("%d ",redBalls[i]);
                }
        printf("+%d\n",blueBall);
        return 0;
}

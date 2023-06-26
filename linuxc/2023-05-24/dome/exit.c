//进程的终止
#include<stdio.h>
#include<stdlib.h>//exit()
#include<unistd.h>
//退出处理函数
void exitfun(void){
    printf("我是退出函数exitfun\n");
}
//退出处理函数
//void exitfun2(int status,void* arg){
//    printf("status=%d\n",status);
//    printf("arg=%s\n",(char*)arg);
//}

int fun (void){
    printf("我是fun...\n");
    exit(0);
    return 10;
}

int main(void){
    //注册退出处理函数
    atexit(exitfun);
    //注册退出处理函数
    return 0;
}

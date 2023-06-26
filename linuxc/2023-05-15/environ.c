//环境变量
#include<stdio.h>
int main(int argc,char* argv[], char* envp[]){
    extern char** environ;//字符指针数组首元素地址
    for (char** pp = environ;*pp;pp++){
        printf("%s\n",*pp);
    }
    return 0;
}

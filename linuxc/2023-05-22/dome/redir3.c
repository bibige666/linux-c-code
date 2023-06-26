//重定向
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(void)
{
    setbuf(stdout,NULL);//关闭标准输出缓存区
    //文件描述符1对应某个文件
    close(1);//文件描述付1空间
    int fd=open("./out.txt",O_WRONLY|O_CREAT|O_TRUNC,0664);
    if(fd==-1){
        perror("open");
        return -1;
    }
    printf("fd=%d\n",fd);
    close(fd);
    return 0;
}

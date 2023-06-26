//文件的打开和关闭
#include <stdio.h>
#include <fcntl.h>//open()
#include <unistd.h>//close()

int main(void)
{
    //打开文件
    int fd=open("./bibige.txt",O_RDWR|O_CREAT|O_TRUNC,0777);
    if (fd==-1){
        perror("open");
        return -1;
    }
    printf("fd=%d\n",fd);
    //关闭文件
    if(close(fd)==-1){
        perror("close");
        return -1;
    }
    return 0;
}

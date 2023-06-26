//从文件中读取数据
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void){
    //打开文件
    int fd=open("./bibige.txt",O_RDONLY);
    if(fd==-1){
        perror("open");
        return -1;
    }
    //读取文件
    char buf[128];//存错读取到文件数据
    ssize_t size=read(fd,buf,sizeof(buf)-1);
    if(size==-1){
        perror("read");
        return -1;
    }
    printf("从文件中读取到%ld个字节的数据\n",size);
    printf("%s\n",buf);
    //关闭文件
    close(fd);
    return 0;
}

//文件描述符的复制
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int main(void){
    //打开文件,得到文件描述符oldfd
    int oldfd=open("./dup.txt",O_WRONLY | O_CREAT | O_TRUNC,0664);
    if(oldfd==-1){
        perror("open");
        return -1;
    }
    printf("oldfd=%d\n",oldfd);
    //复制文件描述符,newfd
    //int newfd=dup(oldfd);
    int newfd=dup2(oldfd,/*1*/STDOUT_FILENO);
    if(newfd==-1){
        perror("dup");
        return -1;
    }
    printf("newfd=%d\n",newfd);
    //通过oldfd向文件写入数据hello world!
    char* buf="Hello world!";
    if(write(oldfd,buf,strlen(buf))==-1){
        perror("write");
        return -1;
    }
    //通过oldfe再次写入数据linux!
    buf="linux";
    if(write(oldfd,buf,strlen(buf))==-1){
        perror("write");
        return -1;
    }
    //关闭文件
    close(newfd);
    close(oldfd);
    return 0;
}

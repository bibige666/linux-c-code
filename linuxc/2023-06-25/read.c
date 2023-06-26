// read date file
#include<stdio.h>
#include<unistd.h>//read()close()
#include<fcntl.h>//open()

int main(void){
    //open file
    int fd=open("./shared.txt",O_RDONLY);
    if(fd==-1){
        perror("open") ;
        return -1;
    }
    //read file
    char buf[64];
    ssize_t size=read(fd,buf,sizeof(buf)-1);
    if(size==-1){
        perror("read");
        return -1;
    }
    printf("read file %ld byte date\n",size);
    printf("%s\n",buf);
    //colse file
    close(fd);
    return 0;
}


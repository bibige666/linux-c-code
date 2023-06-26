//redir
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(void){
    setbuf(stdout,NULL);//close out 

    close(1);
    int fd=open("./out.txt",O_WRONLY|O_CREAT|O_TRUNC,0664);
    if(fd==-1){
        perror("open") ;
        return -1;
    }
    printf("fd=%d\n",fd);
    close(fd);
    return 0;
}

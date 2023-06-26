//open and close
#include<stdio.h>
#include<fcntl.h> //open()
#include<unistd.h> //close()

int main(void){
    //open file
    
    int fd=open("./open.txt",O_RDWR|O_CREAT|O_TRUNC,0777);
    if(fd==-1){
        perror("open") ;
        return -1;
    }
    printf("fd=%d\n",fd);
    //close file
    if(close(fd)==-1){
        perror("close") ;
        return -1;
    }
    return 0;
    
}

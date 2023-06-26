// write date file
#include<stdio.h>
#include<string.h>
#include<fcntl.h>//open()
#include<unistd.h>//close() write()

int main(void){
    //open file
    int fd=open("./shared.txt",O_WRONLY|O_CREAT|O_TRUNC,0664);
    if(fd==-1){
        perror("open") ;
        return -1;
    }
   // write date
   char* buf="hello world!";
   ssize_t size = write(fd,buf,strlen(buf));
   if(size==-1){
        perror("write") ;
        return -1;
   }
   printf("write %ld byte date\n",size);
   //close file
   close(fd);
   return 0;
}

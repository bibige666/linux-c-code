//修改文件大小
#include<stdio.h>
#include<string.h>//strlen
#include<fcntl.h>//open
#include<unistd.h> //write close truncate ftruncate

int main(void){
	//打开文件
	int fd=open("./trunc.txt",O_WRONLY|O_CREAT|O_TRUNC,0664);
	if(fd==-1){
		perror("open");	
		return -1;
	}
	//写入数据 abcde
	char* buf="abcde";
	if(write(fd,buf,strlen(buf))==-1){
		perror("write")	;
		return -1;
	}
	//修改文件大小为3
	if(truncate("./trunc.txt",3)==-1){
		perror("truncate")	;
		return -1;
	}
	//再次修改文件大小为5
	if(ftruncate(fd,5)==-1){
		perror("ftruncate")	;
		return -1;
	}
	//写入文件xyz
	buf="xyz";
	if(write(fd,buf,strlen(buf))==-1){
		perror("write")	;
		return -1;
	}
	//关闭文件
	close(fd);
	return 0;
}


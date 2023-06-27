//访问测试 
#include<stdio.h>
#include<unistd.h> //access

int main(int argc,char* argv[]){
//./a.out文件名
//文件不存在
//文件能读能写
	if(argc<2){
		fprintf(stderr,"用法:./a.out<文件名>\n")	;
		return -1;
	}
	if(access(argv[1],F_OK)==-1){
		//不存在
		printf("%s:不存在\n",argv[1]);
	}else{
		//存在
		printf("%s:",argv[1]);
		if(access(argv[1],R_OK)==-1){
			printf("不可读")	;
		}else{
			printf("可读")	;
		}
		if(access(argv[1],W_OK)==-1){
			printf("不可写")	;
		}else{
			printf("可写")	;
		}
		if(access(argv[1],X_OK)==-1){
			printf("不可执行\n")	;
		}else{
			printf("可执行\n")	;
		}
	}
	return 0;
}

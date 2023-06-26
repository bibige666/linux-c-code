// in tesp
#include<stdio.h>
#include<unistd.h> //access

int main(int argc,char* argv[]){
    if(argc<2){
        fprintf(stderr,"out:./a.out<flie>\n") ;
        return -1;
    }

    if(access(argv[1],F_OK)==-1){
        printf("%s:nofile\n",argv[1]) ;
    }else{
        printf("%s:",argv[1]) ;
        if(access(argv[1],R_OK)==-1){
            printf("notread.") ;
        }else{
            printf("read") ;
        }
        if(access(argv[1],W_OK)==-1){
            printf("notwrite.") ;
        }else{
            printf("write.") ;
        }
        if(access(argv[1],X_OK)==-1){
            printf("notusr.\n") ;
        }else{
            printf("usr\n") ;
        }
    }
    return 0;
}

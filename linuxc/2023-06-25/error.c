#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main(void){
    char* p=malloc(0xffffffffffff);
    if(p==NULL){
        printf("errno=%d\n",errno) ;
        printf("malloc:%s\n",strerror(errno));
        perror("malloc");
        return -1;
    }
    free(p);
    return 0;
}

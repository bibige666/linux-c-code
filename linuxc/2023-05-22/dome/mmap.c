#include <stdio.h>
#include <string.h>
#include <sys/mman.h>//mmap munmap

int main(void)
{
    //建立映射
    char* start=mmap(NULL,8192,PROT_READ |PROT_WRITE,MAP_ANONYMOUS|MAP_PRIVATE,0,0);
    if(start ==MAP_FAILED){
    perror("mmap");
    return -1;
    }
    strcpy(start,"铁锅顿大鹅");
    printf("%s\n",start);

    //解除一个页的映射
    if(munmap(start,4096)==-1){
        perror("munmap");
        return -1;
    }
    //printf("%s\n",start);//段错误
    //第二个页的起始地址
    char* start2=start+4096;
    strcpy(start2,"小鸡炖蘑菇");
    printf("%s\n",start2);

    //解除第二个页的映射
    if(munmap(start2,4096)==-1)
    {
        perror("munmap");
        return -1;
    }
    //printf("%s\n",start2);段错误
    return 0;
}

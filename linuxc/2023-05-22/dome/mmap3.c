#include <stdio.h>
#include <string.h>
#include <sys/mman.h>

int main(void){//建立映射为8192
    char* start=mmap(NULL,8192,PROT_READ|PROT_WRITE,MAP_ANONYMOUS | MAP_PRIVATE,0,0);
    if(start==MAP_FAILED){
    perror("mmap");
    return -1;
    }
    strcpy(start,"铁锅顿大鹅3");
    printf("%s\n",start);

    //解除一个页的映射
    if(munmap(start,4096)==-1){
        perror("munmap");
        return -1;
    }
    //添加第二页的起始页地址
    char* start2=start+4096;
    strcpy(start2,"小鸡顿蘑菇3");
    printf("%s\n",start2);

    //解除第二页的映射
    if(munmap(start2,4096)==-1)
    {
        perror("munmap");
        return -1;
    }
    return 0;
}

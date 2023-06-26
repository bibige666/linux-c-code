//内存映射
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>//mmap munmap

int main(void){
    //建立映射
    char* start = mmap(NULL,8192,PROT_READ | PROT_WRITE,MAP_ANONYMOUS | MAP_PRIVATE,0,0);
    if(start==MAP_FAILED){
        perror("mmap");
        return -1;
    }
    strcpy(start,"铁锅顿大鹅1");
    printf("%s\n",start);
    
    //解除一个页的映射
    if(munmap(start,4096)==-1){
        perror("munmap");
        return -1;
    }
   // printf("%s\n",start);解除完映射在打印的话会发生段错误
   // 第二个页的起始地址
   char* start2=start+4096;
   strcpy(start2,"小鸡顿蘑菇2");
   printf("%s\n",start2);

   // 解除第二页的映射
   if(munmap(start,4096)==-1)
   {
        perror("munmap");
        return -1;
   }
   return 0;
}

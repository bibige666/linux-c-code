#include <stdio.h>
int main(void){
    int var=100;
    printf("var=%d\n",var);

    var=520;
    printf("var=%d\n",var);
    printf("%p\n",&var);
    return 0;
}

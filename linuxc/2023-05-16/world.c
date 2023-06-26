#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[][20]={"One*World","One*Dream!"};
    char *p=str[1];
    printf("%d,",strlen(p));
    printf("%s\n",p);
    return 0;
}

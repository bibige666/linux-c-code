#include <stdio.h>
void swap(char *x, char *y)
{
 char t;
 t=*x; *x=*y; *y=t;
}
int main(void)
{
 char *s1="abc",*s2="123";
 swap(s1,s2);
 printf("%s,%s\n",s1,s2);
 return 0;
}

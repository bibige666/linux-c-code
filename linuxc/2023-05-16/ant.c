#include <stdio.h>
int main(void)
{
    char s[]="012xy\08s34f4w2";
    int i,n=0;
    for(i=0;s[i]!=0;i++)
        if(s[i]>='0'&&s[i]<='9') n++;
    printf("%d\n",n);
    return 0;
}

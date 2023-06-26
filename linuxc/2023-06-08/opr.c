#include <stdio.h>
int main(void)
{
    printf("5/2=%d\n",5/2);
    printf("5/2.0=%lg\n",5/2.0);
    printf("5%%2=%d\n",5%2);
    int a=0,b=0;
    a=b=300;
    printf("a=%d\n",a);
    a=100;
    a*=2+1;
    printf("a=%d\n",a);

    a=100;
    ++a;
    printf("a=%d\n",a);

    a=100;
    a++;
    printf("a=%d\n",a);

    a=100;
    --a;
    printf("a=%d\n",a);

    a=100;
    a--;
    printf("a=%d\n",a);
    
    a=0;
    b=0;

    b=10;
    a=++b;
    printf("a=%d,b=%d\n",a,b);

    b=10;
    a=b++;
    printf("a=%d ,b=%d\n",a,b);
    
    printf("vvv-自增自减不要这样玩");
    b=10;
    a=b++ + ++b;
    printf("a=%d\n",a);
    
    a=10;
    a=++b+b++;
    printf("a=%d\n",a);
    return 0;
}
























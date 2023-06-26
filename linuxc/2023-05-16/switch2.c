#include <stdio.h>
int main(void)
{
    int i,n;
    for(i=0;i<8;i++)
    {
        n=rand()%5;
        switch(n)
        { 
            case 1:
    case 3:
                printf("%d\n",n);
            break;
            case 2:
            case 4:
        printf("%d\n",n);
        continue;
            case 0:
        exit(0);
        }
        printf("%d\n",n);
    }
    return 0;
}

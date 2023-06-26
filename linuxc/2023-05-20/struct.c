#include <stdio.h>
struct S
{
    int n;
    int a[20];
};
void f(struct S *p)
{
    int i,j,t;
    for(i=0;i<p->n-1;i++)
        for(j=i+1;j<p->n;j++)
            if(p->a[i]>p->a[j])
            {
                t=p->a[i];
                p->a[i]=p->a[j];
                p->a[j]=t;
            }
    int main(void)
    {
        int i; struct S s={10,{2,3,1,6,8,7,5,4,10,9}};
        f(&s);
        for(i=0;i<s.n;i++)
            printf("%d,",s.a[i]);
    }
}

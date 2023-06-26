#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[9];
    char sex;
    int score[2];
}STU;
STU f(STU a)
{
    STU b={"Zhao",'m',85,90};
    int i;
    strcpy(a.name,b.name);
    a.sex=b.sex;
    for(i=0;i<2;i++)
        a.score[i]=b.score[i];
    return a;
}
int main(void)
{
    STU c={"Qian",'f',95,92},d;
    d=f(c);
    printf("%s,%c,%d,%d, ", d.name,d.sex,d.score[0],d.score[1]);
    printf("%s,%c,%d,%d, ", c.name,c.sex,c.score[0],c.score[1]);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* addBinary(char* a,char* b){
    int lenA =strlen(a);
    int lenB =strlen(b);
    int lenC =lenA>lenB?lenA:lenB;
    char* c = (char*)malloc(sizeof(char) * (lenC + 2));
    int carry = 0;
    int i = lenA -1,j=lenB -1, k=lenC;

    c[k + 1]='\0';

    while(i>0||j>=0){
        int sum = carry;
        if(i>=0)sum+=a[i--]-'0';
        if(j>=0)sum+=b[j--]-'0';
        carry=sum/2;
        c[k--]=(sum%2)+'0';
    }
    if(carry>0){
        c[k--]='1';
    }
    if(k<0){
        char* temp=(char*)malloc(sizeof(char)*(lenC+3));
        memcpy(temp+1,c,lenC+2);
        temp[0]='1';
        free(c);
        c=temp;
        lenC++;
    }
    return c;
}
int main(void)
{
    char a[]="101";
    char b[]="1101";
    char* c= addBinary(a,b);
    printf("%s\n",c);
    free(c);
    return 0;
}

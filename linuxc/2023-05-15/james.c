#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[]="james";
    char password[]="pepsi";
    char input_name[20];
    char input_password[20];

    printf("请输入用户名:");
    scanf("%s",input_name);
    printf("请输入密码: ");
    scanf("%s",input_password);

    if(strcmp(name,input_name)==0&&strcmp(password,input_password)==0)
    {printf("登录成功!\n");}
    else{printf("登录失败,请重新输入!\n");}
    return 0;
}

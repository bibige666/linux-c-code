#include <stdio.h>
int main(int argc,char* argv[],char* envp[]){
    extern char** environ;
    for(char**pp = environ;*pp;pp++){
        printf("%s\n",*pp);
    }
}

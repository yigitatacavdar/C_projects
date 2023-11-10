#include <stdio.h>

void fortune_cookie(char msg[]) 
{
    printf("%s\n",msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
}

int main() 
{
    char quote[] = "cookies make you fat";
    fortune_cookie(quote);
}


/*refer to page 95 on Head First C for explanation*/

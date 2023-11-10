#include <stdio.h>

void bender(char futurama[])
{
    printf("%s\n", futurama);
}

int main()
{
    char says[] = "eat my shiny metal ass!!";
    bender(says);
}

/*i couldnt use quote again because it is already
 in the memory*/
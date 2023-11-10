#include <stdio.h>


void adding(int *a)
{
    *a = *a + 5;
}

int main()
{
    int alpha = 10;
    
    adding(&alpha);
    printf("alpha: %i\n", alpha);
    return 0;



}
#include <stdio.h>

int main()
{
    int contestants[] = {1, 2, 3};
    int *choice = contestants;
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    printf("I am going to pick contestant number %i\n", contestants[2]);
    return 0;
}

/*contestants[0] is equal to "1" in contestants[]
contestants[1] is equal to "2" and so on...*/
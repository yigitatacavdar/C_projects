
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 1;
    while (counter < 11) { /*repeats the code until false*/
        printf("%i green bottles, hanging on the wall\n", counter);
        counter++;
    }
    system("pause"); 
    return 0;
}

/*NOTES*/

/*printf("%i%i ", x, y);*/

/*if and break can be used in loop (if [this function],  break;
breaks the loop and jumps to the next code*/

/*if and continue can be used in loop,
continue; takes you back to the start of the loop.*/

/*void() means it doesn’t matter.
doesnt need to return anything*/
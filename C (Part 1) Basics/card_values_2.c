
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];     /*char means character, for input of two characters write '3'. and so forth*/
    
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    
    int val = 0;
    
    switch(card_name[0]) { /*switch is used to work with variables-*/
        case'K':            /*with the same values */
        case'Q':
        case'J':
            val = 10;
            break;
        case'A':
            val = 11;
            break;
        default:
            val = atoi(card_name);
    }

    printf("The card's value is: %i\n", val);
    system("pause");
    return 0;
}
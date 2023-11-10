#include <stdio.h>

/*doesnt work properly*/

int main()
{
    char input1[2];
    char input2[10];
    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    return 0;


}
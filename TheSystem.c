#include <stdio.h>
#include <stdlib.h>



int main()
{
    char input_user[20];
    char input_user2[10];

    puts("Enter your name: ");
    fgets(input_user, 20, stdin);

    printf("Welcome %2s", input_user);
    system("pause");
    printf("what would you like to do %2s\n", input_user);
    printf("1 - Go to library\n");
    printf("2 - play a game\n");

    scanf("%2s", input_user2);

    if (input_user2[0] == '1'){
        printf("welcome to library %2s\n", input_user);
        system("pause");
        return 0;
    } else if (input_user2[0] == '2'){
        printf("welcome to games %2s\n", input_user);
        system("pause");
        return 0;
    } 
}
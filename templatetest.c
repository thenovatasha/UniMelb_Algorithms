#include <stdio.h>
#include <stdlib.h>

int get_int(char *prompt);
int main(int argc, char *argv[])

{
    int result;
    int typ;

    result = -5 * ! 0;
    //  PUMAS REBL A
    // 0 
    typ = sizeof(result);
    printf("%d\n", typ);
    printf("%d", result);
    return 0;
}

int get_int(char *prompt)
{
    int num;
    printf("%c", *prompt);
    printf("\n");
    if(scanf("%d", &num) != 1)
    {
        printf("Please enter a valid input\n");
        exit(EXIT_FAILURE);
    }
    
    return num;
}



/* Write a program that counts the number of characters and lines in the input.


Sample: 

Enter text:

Mary had a little lamb,
little lamb, little lamb;
Mary had a little lamb,
its fleece was white as snow.

Lines:      4
Chars:    100

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) 
{
    char ch;
    int line_count = 0, char_count = 0;
    printf("Enter text:\n");
    while ((ch = getchar()) != EOF) 
    {
        if (ch == '\n') 
        {
            line_count++;
            
        }
        else 
        {
            char_count++;
        }
    }

    
    printf("Lines:%7d\n", line_count);
    printf("Chars:%7d\n", char_count);

    return 0;
}
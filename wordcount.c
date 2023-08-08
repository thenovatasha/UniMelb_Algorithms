/* Write a program that counts the number of words and lines in the input.


Sample: 

Enter text:

Mary had a little lamb,
little lamb, little lamb;
Mary had a little lamb,
its fleece was white as snow.

Lines:      4
Chars:    100
Words:     20

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) 
{
    char ch;
    int line_count = 0, char_count = 0, word_count = 0;
    int inaword = 1;

    printf("Enter text:\n");
    while ((ch = getchar()) != EOF) 
    {
        char_count++;
        if ((ch == '\n') || (ch == ' ')) 
        {
            if (ch =='\n') 
            {
                line_count++;
            }         
            
            if (inaword == 1) 
            {
                word_count++;
                inaword = 0;
            }
        }
        else
        {            
            inaword = 1;
        }

    }
  
    printf("Lines:%7d\n", line_count);
    printf("Words:%7d\n", word_count);
    printf("Chars:%7d\n", char_count);

    return 0;
}
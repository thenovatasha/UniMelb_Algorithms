#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 10
#define MAX_CHARS 10
/* Create a program that can read 1000 words, all of
length no more than 10 characters */
typedef char word_t[MAX_CHARS+1];
void print_words(word_t reading_array[], int length);
int read_word(word_t word, int max_chars);
int fill_distinct(word_t distinct_words[], word_t word, int max_words, int *filled);

int main(int argc, char *argv[])
{      
    int distinct_filled = 0;
    word_t distinct_words[MAX_WORDS];
    word_t word;
    printf("Please enter a text: ");
    while ((read_word(word, MAX_CHARS) != EOF) && (distinct_filled < MAX_WORDS))
    {
        fill_distinct(distinct_words, word, MAX_WORDS, &distinct_filled);
    }
    printf("here\n");
    printf("%d distinct words read\n", distinct_filled);
    print_words(distinct_words, distinct_filled);
    

    return 0;
}
/* Read words upto maxchars */

int read_word(word_t word, int max_chars)
{
    int ch;
    int index = 0;
    
    while((ch = getchar()) != EOF && isalpha(ch))
    {
        if(index == max_chars)
        {
            word[index] = '\0';
            return 1;
        }
        word[index] = ch;
        index++;
    }
    if (ch == EOF)
    {
        return EOF;
    }
    word[index] = '\0';
    return (index);
   
}

void print_words(word_t reading_array[], int length)
{
    int i = 0;
    for (i = 0; i < length; i++)
    {
        printf("Word %d is %s\n", i+1 ,reading_array[i]);
    }
    return;    
}

int fill_distinct(word_t distinct_words[], word_t word, int max_words, int *filled)
{
    for (int i = 0; i < *filled; i++)
    {
        if (strcmp(distinct_words[i], word) == 0)
        {
            printf("Found a copy\n");
            return 0;
        }
    }
    strcpy(distinct_words[*filled], word);
    (*filled)++;
    return 1;
   
}
#include <stdio.h>
#include <stdlib.h>

#define MAXSTR 100

int is_anagram(char s1[], char s2[]);
void find_frequency(char string[], int frequencytable[]);
int main(int argc, char* argv[]) {

    
    return 0;
}

int is_anagram(char s1[], char s2[]) {
    // TODO: Implement this function.
    /* Find distinct characters and frequency */

    /* Frequency lookup table */
    int s1freq[127] = {0};
    int s2freq[127] = {0};
    find_frequency(s1, s1freq);
    find_frequency(s2, s2freq);
    for(int i = 0; i < 127; i++) {

        if(s1freq[i] != s2freq[i]) {
            return 0;
        }
    }
    return 1;

}

void find_frequency(char string[], int frequencytable[]) {

    for(int i = 0; string[i]; i++) {

        frequencytable[(int)string[i]]++;
    }

}

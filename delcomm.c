#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int ch, in_comment = 0, prev_char = ' ';
    while((ch = getchar()) != EOF) {
        
        if (in_comment) {
            if (ch == '/')
            {
                if (prev_char == '*') {
                    in_comment = 0;
                    prev_char = ' ';
                    continue;
                }
            }
        }
        else {     
            if (ch == '*') {

                if (prev_char == '/') {
                    in_comment = 1;
                    prev_char = ' ';
                    continue;
                }
                else {
                    putchar(ch);
                }
            }
            else {   
                if (ch == '/') {

                    if (prev_char == '/') {
                        putchar(ch);
                    }
                    
                }
                else if (prev_char == '/') {
                    printf("/");
                    putchar(ch);
                    
                }
                else {
                    putchar(ch);
                    
                }
            }
        }
        prev_char = ch;  
    }
    return 0;
}
#include <stdio.h>
#define STAR 42
#define FWDSLASH 47
int main(int argv, char *argc[]) {
	
    int ch, incomment = 0;
    
	while ((ch = getchar()) != EOF) {

    // check if line is in comment
        printf("%i", incomment);
        printf("Character num: %d", ch);
        
    

        return 0;

    }
}
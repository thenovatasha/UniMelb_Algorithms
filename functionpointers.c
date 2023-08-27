#include <stdio.h>
#include <stdlib.h>

int arrlen(int array[][8]);
int main(int argc, char* argv[])
{
    int testarr[][8] = {{5, 2, 5, 6, 7, 7, 7, 7}, {5, 2, 5, 6, 7, 7, 7, 7}};
    printf("%d", arrlen(testarr));
    return 0;
}


int arrlen(int array[][8]){

    printf("%d size of arr", sizeof(array[0]));
    return (sizeof(array[0])/sizeof(array[0][0]));
}
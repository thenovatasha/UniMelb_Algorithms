#include <stdio.h>
int z = 200;
void func(int x);

int main(int argv, char *argc[])

{
    int x = 3, z = 5;

    printf("main : x =%2d, z =%2d\n", x, z);
    func(z);
    return 0;
}

void func(int x) 
{
    x = x + 2;
    
    printf("Func X: %d Z: %d\n", x, z);
}
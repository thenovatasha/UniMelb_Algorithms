#include <stdio.h>
void Q1(){

   printf("\nQ1\n=====\n");
printf("Q1a: value is %4d, type is int\n",
11 - 17 % 3 * 2);
printf("Q1b: value is %4lu, type is double\n",
sizeof(5 / 2.0f));
printf("Q1c: value is %4d, type is int\n",
-5 * !0 + 3 > 2);
printf("Q1d: value is %4d, type is int\n",
9 > 8 < 9);

}

int main(){

    Q1();
    return 0;
}
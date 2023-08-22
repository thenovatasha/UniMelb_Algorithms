/*Write a function int try_one_coin(int *cents, int coin) that reduces the current cents amount 
by the value of the current coin as many times as is possible, altering the value of cents appropriately 
and returning the number of coins of that denomination that should be issued.
Then write a function void print_change(int cents) that tests each different coin denomination 
in the correct ordering, and uses try_one_coin to tell it how to generate the required change.
In the late 1980s in Australia, 1c and 2c coins were abolished, and $1 and $2 were introduced. 
Write a further function int round_to_5(int cents) that returns a value rounded off to the nearest multiple of five. 
For example, 12c of change is rounded to 10c; whereas 23c is rounded to 25c.
Finally, write a driver program that allows you to test your functions on monetary amounts up to $10 (1000 cents).*/

/*Enter amount in cents: 987
give 4 200-cent coins
give 1 100-cent coins
give 1  50-cent coins
give 1  20-cent coins
give 1  10-cent coins
give 1   5-cent coins*/

#include <stdio.h>
#include <stdlib.h>
int try_one_coin(int *cents, int coin);
int main(int argc, char* argv[]){

    int num;
    printf("Enter amount in cents: ");
    scanf("%d", &num);
    return 0;
}

int try_one_coin(int *cents, int coin){


}
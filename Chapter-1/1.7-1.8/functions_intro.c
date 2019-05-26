#include <stdio.h>

//create the power function
int power(int, int);
int power(int base, int n)
{
    int p;
    for (p = 1; n > 0 ; --n) {
        p = p * base;
    }
    return p;
}

int main() {
    //print out 2 powers for testing
    printf("2^2 is %d, and 4^2 is %d \n", power(2,2), power(4, 2));
    return 0;
}   
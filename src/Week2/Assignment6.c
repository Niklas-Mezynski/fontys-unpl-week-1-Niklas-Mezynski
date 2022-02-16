#include "stdio.h"

unsigned char pbcd(int n); 
void printInBinary(char c)
{
    char i;
    for (i = 1 << 7; i > 0; i = i / 2)
        (c & i) ? printf("1") : printf("0");
    printf("\n");
}

int main() {
    char r = pbcd(12345);
    printf("Char value: %hd\n", r);
    printInBinary(r);
    return 0;
}

unsigned char pbcd(int n) {
    unsigned char first, second;
    int tempN = n;
    second = n - ((n / 10) * 10);
    first = (n - ((n - second) / 100 * 100)) / 10;
    return (first << 4) + second;
}
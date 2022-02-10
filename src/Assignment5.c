#include "stdio.h"

unsigned long int date_encode(int year, int month, int day);
void printBits(size_t const size, void const * const ptr);

int main() {
    unsigned long int encoded_date = date_encode(4095, 12, 31);
    printBits(sizeof(encoded_date), &encoded_date);
    return 0;
}

unsigned long int date_encode(int year, int month, int day) {
    unsigned long int result;
    result <<= 12;
    if (year < 4096) {
        result += year;
    }
    result <<= 4;
    if (month <= 12) {
        result += month;
    }
    result <<= 5;
    if (day <= 31) {
        result += day;
    }
    return result;
}

void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}
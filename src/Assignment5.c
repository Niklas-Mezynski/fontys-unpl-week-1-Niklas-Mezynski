#include "stdio.h"

unsigned long int date_encode(int year, int month, int day);
int date_decode(unsigned long int input, int *year, int *month, int *day);
void printInBinary(unsigned long int number);

int main()
{
    unsigned long int encoded_date;
    int y, m, d;
    y = 4095;
    m = 12;
    d = 31;
    encoded_date = date_encode(y, m, d);
    printf("Scenario 1 - Year: %d   Month: %d   Day: %d encodes to: ", y, m, d);
    printInBinary(encoded_date);

    y = 2022;
    m = 2;
    d = 10;
    encoded_date = date_encode(y, m, d);
    printf("Scenario 2 - Year: %d   Month: %d   Day: %d encodes to: ", y, m, d);
    printInBinary(encoded_date);

    y = -1;
    m = 13;
    d = 10;
    encoded_date = date_encode(y, m, d);
    printf("Scenario 3 - Year: %d   Month: %d   Day: %d encodes to: ", y, m, d);
    printInBinary(encoded_date);

    y,m,d = 0;
    date_decode(2097055, &y, &m, &d);
    printf("Decoding int 2097055 [00000000000111111111111110011111] -> Year: %d   Month: %d   Day: %d \n", y, m, d);

    y,m,d = 0;
    date_decode(1035338, &y, &m, &d);
    printf("Decoding int 1035338 [00000000000011111100110001001010] -> Year: %d   Month: %d   Day: %d \n", y, m, d);
    return 0;
}

unsigned long int date_encode(int year, int month, int day)
{
    unsigned long int result;
    //checking that none of the values are negative
    if (year < 0 || month < 0 || day < 0)
    {
        return 0;
    }

    // result <<= 12;
    //Adding the integers to the result and then shifting the bits to the left afterwards
    if (year < 4096)
    {
        result += year;
    }
    result <<= 4;
    if (month <= 12)
    {
        result += month;
    }
    result <<= 5;
    if (day <= 31)
    {
        result += day;
    }
    return result;
}

int date_decode(unsigned long int input, int *year, int *month, int *day) {
    //Shifting only bits filled with one to the proper position
    //Then using the & operator to get the right bits from input
    //Then shifting it back to its proper position
    *year = ((4095 << 9) & input) >> 9;
    *month = ((15 << 5) & input) >> 5;
    *day = (31) & input;
}

void printInBinary(unsigned long int number)
{
    unsigned long int i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (number & i) ? printf("1") : printf("0");
    printf("\n");
}
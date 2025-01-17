#include "stdio.h"

void convertToIndexes(char in1, int in2, int *out1, int *out2);

int main()
{
    char in1;
    int in2, out1, out2;
    in1 = 'F';
    in2 = 3;
    convertToIndexes(in1, in2, &out1, &out2);
    printf("Scenario 1 - %c,%d converts to %d,%d\n", in1, in2, out1, out2);

    in1 = 'A';
    in2 = 1;
    convertToIndexes(in1, in2, &out1, &out2);
    printf("Scenario 2 - %c,%d converts to %d,%d\n", in1, in2, out1, out2);

    in1 = 'H';
    in2 = 8;
    convertToIndexes(in1, in2, &out1, &out2);
    printf("Scenario 3 - %c,%d converts to %d,%d\n", in1, in2, out1, out2);
    in1 = 'I';
    in2 = 9;
    convertToIndexes(in1, in2, &out1, &out2);
    printf("Scenario 4 - %c,%d converts to %d,%d\n", in1, in2, out1, out2);
    return 0;
}

void convertToIndexes(char in1, int in2, int *out1, int *out2)
{
    if (in1 >= 'A' && in1 <= 'H')
    {
        *out1 = in1 - 'A';
    } else {
        *out1 = 0;
    }

    if (in2 >= 1 && in2 <= 8)
    {
        *out2 = in2 - 1;
    } else {
        *out2 = 0;
    }
}
#include "stdio.h"
#include "math.h"

int val(int p1, double * p2, char *p3);

int main() { 
    int r, a; double d;
    char s[32] = {"zGHiw$hfgw"};

    printf("Char Array content is \"zGHiw$hfgw\"\n");

    a = 0;
    val(a, &d, s);
    printf("Scenario 1 - Sqrt of ASCII Character at position %d (%c) is: %f\n", a, s[a], d);

    a = 1;
    val(a, &d, s);
    printf("Scenario 2 - Sqrt of ASCII Character at position %d (%c) is: %f\n", a, s[a], d);

    a = 5;
    val(a, &d, s);
    printf("Scenario 3 - Sqrt of ASCII Character at position %d (%c) is: %f\n", a, s[a], d);

    a = 10;
    val(a, &d, s);
    printf("Scenario 4 - Sqrt of ASCII Character at position %d (%c) is: %f\n", a, s[a], d);
    return 0;
}
 
int val(int p1, double * p2, char *p3) { 
    // printf("Sqrt should be %d", sqrt(p3[p1]));
    *p2 = sqrt(p3[p1]);
    return 1;
}
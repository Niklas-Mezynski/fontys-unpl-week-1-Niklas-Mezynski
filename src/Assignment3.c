#include "stdio.h"
#include "math.h"

int val(int p1, double * p2, char *p3);

int main() { 
    int r, a; double d;
    char s[32] = {"zGHiw$hfgw"};

    printf("Char Array content is \"zGHiw$hfgw\"\n");

    a = 0;
    r = val(a, &d, s);
    printf("Scenario 1 - Sqrt of ASCII Character at position %d (%c) is: %d\n", a, s[a], r);

    a = 1;
    r = val(a, &d, s);
    printf("Scenario 2 - Sqrt of ASCII Character at position %d (%c) is: %d\n", a, s[a], r);

    a = 5;
    r = val(a, &d, s);
    printf("Scenario 3 - Sqrt of ASCII Character at position %d (%c) is: %d\n", a, s[a], r);

    a = 10;
    r = val(a, &d, s);
    printf("Scenario 4 - Sqrt of ASCII Character at position %d (%c) is: %d\n", a, s[a], r);
    
    return 0;
} 
 
int val(int p1, double * p2, char *p3) { 
    return sqrt(p3[p1]);
} 
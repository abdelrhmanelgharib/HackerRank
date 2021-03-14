#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH  1000


int main()
{ 
    int n;
    scanf("%d",&n);
    int count = 0;

    while (n) 
    {
        n = (n & (n << 1));
        count++;
    }

    printf ("%d\n", count);

    return 0;
}

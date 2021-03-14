#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int x;
    scanf("%d",&x);
    if(x%2 == 0)
    {
        if (x>0 && x<5)
        {
            printf("Not Weird");
        }
        else if (x>6 && x<=20)
        {
            printf("Weird");
        }
        else {
        printf("Not Weird");
        }
    }
    else {
    printf("Weird");
    }
    return 0;

}

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    int num, i, res;
    scanf("%d",&num);
    
    for(i=1;i<11;i++)
    {
        res =i* num; 
        printf("%d x %d = %d\n",num, i, res);
    }
    
    return 0;
}

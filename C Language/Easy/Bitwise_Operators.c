/*
 *  Author: El-Gharib
 *  Created on: 15/2/2021
 */


#include <stdio.h>

/* Function ProtoTypes */
void Max_Bitwise(int , int);



int main()
{

    int n, k;

    scanf("%d%d", &n, &k);

    Max_Bitwise(n, k);

    return 0;
}



void Max_Bitwise(int n, int k)
{
    int i, j;
    int MaxOR = 0;
    int MaxXOR = 0;
    int MaxAND = 0;

    for (i=1; i<= n; i++)
    {
        for (j=i+1; j <= n; j++)
        {
            if ( ((i|j) >= MaxOR) && ((i|j) < k))
                MaxOR = (i|j);

            if ( ((i^j) > MaxXOR) && ((i^j) < k))
                MaxXOR = (i^j);

            if ( ((i&j) > MaxAND) && ((i&j) < k))
                MaxAND = (i&j);
        }   
    }

    printf("%d\n%d\n%d\n", MaxAND, MaxOR, MaxXOR);
}   /* Max_Bitwise */
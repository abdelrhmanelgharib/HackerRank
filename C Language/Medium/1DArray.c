/*
 *  Author: El-Gharib
 *  Created on: 16/2/2021
 */

#include <stdio.h>

#define LENGTH 1000


int main()
{
    int Arr[LENGTH];
    int n, i;
    int Sum =0;

    /* number of element in array */
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&Arr[i]);
        Sum += Arr[i];
    }
    printf("%d", Sum);
    return 0;
}
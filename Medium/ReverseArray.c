/*
 *  Author: El-Gharib
 *  Created on: 16/2/2021
 */

#include <stdio.h>

#define LENGTH 1000


int main()
{
    int Arr[LENGTH], TempArr[LENGTH];
    int n, i, j;

    /* number of element in array */
    scanf("%d", &n);

    j = n;
    /* this loop to get index of an array from user and reverse array */
    for (i=0; i<n; i++)
    {
        scanf("%d",&Arr[i]);
        TempArr[j-1] = Arr[i];
        j--;
    }

    /**/
    for ( i = 0; i < n; i++)
    {
        printf("%d ",TempArr[i]);
    }
    
    return 0;
}

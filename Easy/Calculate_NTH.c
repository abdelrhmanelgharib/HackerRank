/*
 *  Author: El-Gharib
 *  Created on: 16/2/2021
 */

#include <stdio.h>

int NTH_Term(int , int , int, int );

int main(void)
{
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);

    int result = NTH_Term(n, a, b, c);
    printf("%d", result); 
    return 0;
}



int NTH_Term(int n, int a, int b, int c)
{
    if (n == a)
        return a;
    else if(n == b)
        return b;
    else if(n == c)
        return c;

        printf("n is %d ",n);

    return NTH_Term(n-1, a, b, c) + NTH_Term(n-2, a, b, c); 
}
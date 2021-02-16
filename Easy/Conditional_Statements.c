/*
 *  Author: El-Gharib
 *  Created on: 16/2/2021
 */

#include <stdio.h>


int main(void)
{
    int n;
    scanf("%d",&n);
    const char *Str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if ( n < 1)
        return 1;
    
    if (n >= 1 && n <= 9)
        printf("%s",Str[n-1]);
    else
        printf("Greater than 9");
    
    return 0;
}
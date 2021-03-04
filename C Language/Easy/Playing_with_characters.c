/*
 *  Author: El-Gharib
 *  Created on: 15/2/2021
 */

#include <stdio.h>
#include <string.h>

#define LENGTH 100

int main()
{
    char ch;
    char Str[LENGTH];
    char Sen[LENGTH];

    /* read character from user */
    scanf(" %c", &ch);

    /* read string from user */
    scanf("%100s", Str);

    /* read sentence from user */
    fflush(stdin);
    scanf(" %[^\n]%*c", Sen);

    /* print sting */
    printf("%c\n", ch);
    printf("%s\n", Str);
    printf("%s\n", Sen);
    return 0;
}
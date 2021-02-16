/*
 *  Author: El-Gharib
 *  Created on: 15/2/2021
 */

#include <stdio.h>


typedef enum
{
    one =1,
    two ,
    Three ,
    Four ,
    Five ,
    six ,
    seven , 
    Eight ,
    Nine ,
    even ,
    odd ,
}Numbers;


int main()
{   
    /* access every element in array */
    char *Number [11] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};

    int FirstElement, SecondElement;

    /* read to number from user */
    scanf("%d%d", &FirstElement, &SecondElement);

    while (FirstElement <= SecondElement)
    {
        /* print numbers that between two element */
        printf("%s\n",(FirstElement <= Nine) ? Number[FirstElement-1] : (FirstElement %2) ? "odd": "even");
        FirstElement++;
    }

    return 0;
}
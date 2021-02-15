/*
 *  Author: El-Gharib
 *  Created on: 15/2/2021
 */


#include <stdio.h>

int main()
{
    int Number, Temp;
    int Sum = 0;

    scanf("%d",&Number);

    while (Number != 0)
    {
        Temp = Number;

        Sum = Sum + (Number % 10);
        Number /=10;
    }

    printf("%d",Sum);
    
   
    return 0;
}
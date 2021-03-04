/*
 *  Author: El-Gharib
 *  Created on: 15/2/2021
 */


#include <stdio.h>

int main ()
{
    int Num_one, Num_Two;
    float Num_Three, Num_Four;

    /* Read data from user */
    scanf("%d%d%f%f", &Num_one, &Num_Two, &Num_Three, &Num_Four);
    
    /* print all value */
    printf("%d %d\n%.1f %.1f", Num_one+Num_Two, Num_one-Num_Two, Num_Three+Num_Four, Num_Three-Num_Four);



    return 0;
}
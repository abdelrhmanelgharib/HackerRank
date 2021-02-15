/*
 *  Author: El-Gharib
 *  Created on: 15/2/2021
 */


#include <stdio.h>
#include <math.h>


/* Function ProtoTypes */
void Update(int* , int*);

int main()
{
    int Num_One, Num_Two;

    /* read data from user */
    scanf("%d %d", &Num_One, &Num_Two);

    /* call function update */
    Update(&Num_One, &Num_Two);
    /* print all data */
    printf("%d\n", Num_One);
    printf("%d", Num_Two);
    
    return 0;
}



/* this function to get sum and sub of two Number by reference */
void Update(int* Num_One, int* Num_Two)
{
    int Temp;
    Temp = *Num_One;
    *Num_One = *Num_One + *Num_Two;

    *Num_Two = abs(Temp - *Num_Two);

}   /* Update */
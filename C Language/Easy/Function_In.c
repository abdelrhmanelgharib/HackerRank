/*
 *  Author: El-Gharib
 *  Created on: 15/2/2021
 */


#include <stdio.h>


/* Function ProtoTypes */
int Max_Num(int , int , int , int );



int main ()
{
    int Num_One, Num_Two, Num_Three, Num_Four;

    /* read data from user */
    scanf("%d%d%d%d", &Num_One, &Num_Two, &Num_Three, &Num_Four);

    /* print max number */
    printf("%d",Max_Num(Num_One, Num_Two, Num_Three, Num_Four));


    

    return 0;
}


/* this function for get max number of four numbers */
int Max_Num(int Num_One, int Num_Two, int Num_Three , int Num_Four)
{
    /* assume Num_one is the greatest number */
    int Max = Num_One;

    if (Num_Two > Max)
    {
        Max = Num_Two;
    }
    if(Num_Three > Max)
    {
        Max = Num_Three;
    }
    if(Num_Four >Max)
    {
        Max = Num_Four;
    }
    
    return Max;

}   /* Max_Num */
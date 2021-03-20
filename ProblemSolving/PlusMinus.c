#include "stdio.h"

#define     LENGTH      101

void PlusMinus(void);


int main()
{
    
    PlusMinus();

    return 0;
}



void PlusMinus(void)
{
    int i;
    int n, arr[LENGTH];
    float postive=0, negative=0, zeros=0;

    scanf("%d",&n);
    

    for (i=0;i<n; i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]>0)
        {
            postive++;
        }
        if(arr[i] <0)
        {
            negative++;
        }
        if(arr[i]==0)
        {
            zeros++;
        }
    }

    postive /= n;
    negative /= n;
    zeros /= n;

    printf("%f\n%f\n%f", postive, negative, zeros);
}
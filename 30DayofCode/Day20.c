#include <stdio.h>

#define LENGTH      1000  


void Swap(int* Numb1, int* Numb2);
void Bubble_Sort(int* Arr, int Number);



int main()
{
    int n=0, arr[LENGTH];
    int i=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    Bubble_Sort(arr, n);

    return 0;
}

void Swap(int* Numb1, int* Numb2)
{
    int temp;

    temp = *Numb1;
    *Numb1 = *Numb2;
    *Numb2 = temp;
}


/* Bubble Sorting Algorithm */
void Bubble_Sort(int* Arr, int Number)
{
    int i, j, Temp, Flag=0;
    int counter=0;
    /* Outer loop for pass squence */
    for (i=0; i<Number-1; i++)     // Number -1 : can't access the last element 
    {   
        Flag=0;
        /* internal loop to get larg element */
        for(j=0; j< Number-1-i; j++)
        {
            if (Arr[j] > Arr[j+1])
            {   
                /* swap the larg element to the end of array */
                Swap(&Arr[j],&Arr[j+1]);
                counter++;
                Flag=1;
            }  
        }
        /* check if the array is sorted */
        if (Flag == 0)
        {
            /* Array is sorted, then break */

           // printf("Array after swapping is \n");
            
            printf("Array is sorted in %d swaps.\n",counter);
            printf("First Element: %d \n",Arr[0]);
            printf("Last Element: %d \n",Arr[Number-1]);
            
            return;
        }
    }


    printf("Array is sorted in %d swaps.\n",counter);
    printf("First Element: %d \n",Arr[0]);
    printf("Last Element: %d \n",Arr[Number-1]);
    
}   //Bubble_Sort
    

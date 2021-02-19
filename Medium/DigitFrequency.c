/*
 *  Author: El-Gharib
 *  Created on: 18/2/2021
 *  Version: 1
 */

#include <stdio.h>
#include <string.h>

#define LENGTH 1000


/*
 *	create an array of ten element and init by zero
 *	make number in string as a postion in array
 *	add 1 every time access the same element in array
 * 
*/


int main()
{
	char Str[LENGTH];
	int len=0, i, x;
	

	int Arr[10]={0};

	gets(Str);

	for (i=0; i<strlen(Str); i++)
	{
		len++;
	}
	// printf("length is%d\n",len);
	
	for(i=0; i<len; i++)
	{
		if ( (Str[i]>=48) && (Str[i]<=58))
		{
			x = Str[i]-48;
			//printf("x= :%d\n", x);
			Arr[x]+=1;
			//printf("array of 10: %d\n",Arr[x]);
		}
		
	}
	for(i=0; i<10;i++)
	{
		printf("%d ",Arr[i]);
	}

	return 0;
	
}
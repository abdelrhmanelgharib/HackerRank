#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **s,int x,int y)
{
    char *temp;
    temp = s[x];
    s[x] = s[y];
    s[y] = temp;
}


void reverse(char **s,int x, int y)
{
    
    while(x<y)
    {
     swap(s,x,y);
        x++;
        y--;
    }
}

int next_permutation(int n, char **s)
{
    int i,inv=-1;
    for(i=0;i<n-1;i++)
    {
        if(strcmp(s[i],s[i+1]) < 0)
        {
            inv = i;
        }
    }
    if(inv == -1) return 0;
    for(i=n-1;i>inv;i--)
    {
        if(strcmp(s[inv],s[i]) < 0)
        {
            swap(s,inv,i);
            break;
        }
    }
    reverse(s,inv+1,n-1);
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
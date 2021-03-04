#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char *s;
    s = (char*)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (char *c = s; *c != NULL; c++) {
    if (*c == ' ') {
        *c = '\n';
    }
}
    int i =0;
    while(s[i] != '\0')
    {   
        if (s[i] == ' ')
            printf("\n");
            i++;
    }
    printf("%s",s);
    return 0;
}
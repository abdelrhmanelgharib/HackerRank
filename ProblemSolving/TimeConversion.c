/*
 *  Author: El-Gharib
 *  Created on: 5/3/2021
 *  Version: 1
 */
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *readline();

char *timeConversion(char *s)
{
    /*
     * Write your code here.
     */
    int i = 0;

    char *Temp = (char *)malloc(sizeof(char) * 11);

    char x = strcmp(s, "12:00:00AM");

    if (s[8] == 'P')
    {
        if ((s[0] == '1') && (s[1] == '2'))
        {
            s[8] = '\0';
        }
        else
        {
            /* add 12 hours */
            s[0] = s[0] - '0' + '1';
            s[1] = s[1] - '0' + '2';
            s[8] = '\0';
        }
    }
    else if (s[8] == 'A')
    {
        if ((s[0] == '1') && (s[1] == '2'))
        {
            s[0] = '0';
            s[1] = '0';
        }
        s[8] = '\0';
    }

    while (s[i] != '\0')
    {
        Temp[i] = s[i];
        i++;
    }

    return Temp;
}

int main()
{
    FILE *fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char *s = readline();

    char *result = timeConversion(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);
    free(result);

    return 0;
}

char *readline()
{
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char *data = malloc(alloc_length);

    while (true)
    {
        char *cursor = data + data_length;
        char *line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line)
        {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
        {
            break;
        }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data)
        {
            break;
        }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n')
    {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

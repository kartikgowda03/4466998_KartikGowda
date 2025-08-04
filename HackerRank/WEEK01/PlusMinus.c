#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *readline();
char *ltrim(char *);
char *rtrim(char *);
char **split_string(char *);

int parse_int(char *);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(int arr_count, int *arr)
{
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < arr_count; i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }
    printf("%.6f\n", (float)pos / arr_count);
    printf("%.6f\n", (float)neg / arr_count);
    printf("%.6f\n", (float)zero / arr_count);
}

int main()
{
    int n = parse_int(ltrim(rtrim(readline())));

    char **arr_temp = split_string(rtrim(readline()));

    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        int arr_item = parse_int(*(arr_temp + i));

        *(arr + i) = arr_item;
    }

    plusMinus(n, arr);

    return 0;
}
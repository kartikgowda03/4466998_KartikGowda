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
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(int arr_count, int *arr)
{
    long total = 0;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < arr_count; i++)
    {
        total += arr[i];
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    long minSum = total - max;
    long maxSum = total - min;

    printf("%ld %ld\n", minSum, maxSum);
}

int main()
{

    char **arr_temp = split_string(rtrim(readline()));

    int *arr = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        int arr_item = parse_int(*(arr_temp + i));

        *(arr + i) = arr_item;
    }

    miniMaxSum(5, arr);

    return 0;
}

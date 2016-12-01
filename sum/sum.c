#include <stdio.h>
#include <stdlib.h>
#include "data.h"

static int sum_normal(const int* vec, size_t size)
{
    int result = 0;

    for (size_t i = 0; i < size; i++)
    {
        result += vec[i];
    }
    return result;
}

int main(int argc, char *argv[])
{
    size_t size = (size_t)atol(argv[1]);
    size_t loop = (size_t)atol(argv[2]);
    size_t i = 0;
    int result = 0;
    int print_result = 0;

    for (i = 0; i < loop; i++)
    {
        result = sum_normal(table, size);
        print_result += result;
    }
    printf("%d\n", print_result);

    return result;

}


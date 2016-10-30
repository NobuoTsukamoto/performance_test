#include <stdio.h>
#include <stdlib.h>

static int complex_sum(int size)
{
    int result = 1;

    while (size > 0)
    {
        for (int i = 0; i < size - 1; i++)
        {
            result = (result + 1) << 1;
        }
        size--;
    }

    return result;
}

int main(int argc, char *argv[])
{
    int size = atoi(argv[1]);
    unsigned long loop = (unsigned long)atol(argv[2]);
    int result = 0;
    int total = 0;

    printf("arg1 = %d, arg2 = %ld\n", size, loop);

    for (unsigned long i = 0; i < loop; i++)
    {
        result = complex_sum(size);
        //printf("%d,", result);
        total += result;
    }
    printf("%d,", total);

    return result;

}


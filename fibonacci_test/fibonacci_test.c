#include <stdio.h>
#include <stdlib.h>

static int fibonacci(int size)
{
    if (size < 2)
    {
        return 1;
    }
    return fibonacci(size - 1) + fibonacci(size -2);
}

static int work(int size)
{
    int result = 1;

    while (size > 0)
    {
        result = result + fibonacci(size);
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
        result = work(size);
    }
    printf("%d,", total);

    return total;

}


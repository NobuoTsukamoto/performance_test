#include <stdio.h>
#include <stdlib.h>

static int sum_normal(int size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result = (result + i) << 1;
    }
    return result;
}

int main(int argc, char *argv[])
{
    int size = atoi(argv[1]);
    unsigned long loop = (unsigned long)atol(argv[2]);
    unsigned long j = 0;
    int result = 0;
    int print_result = 0;

    for (j = 0; j < loop; j++)
    {
        result = sum_normal(size);
	print_result += result;
    }
        printf("%d,", print_result);

    return result;

}


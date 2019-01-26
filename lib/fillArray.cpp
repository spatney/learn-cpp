#include <stdlib.h>
#include <time.h>

void fillArray(long *numbers, long size)
{
    srand(time(0));

    for (long i = 0; i < size; i++)
    {
        *(numbers + i) = rand() % size;
    }
}
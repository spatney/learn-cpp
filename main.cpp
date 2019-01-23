#include <iostream>
#include "lib/utilities.h"
using namespace std;

void minMaxExample()
{
    auto size = 100L;
    auto *numbers = (int *)malloc(size * sizeof(int));

    fillArray(numbers, size);

    int *smallest = 0, *largest = 0;

    minMax(numbers, numbers + size, &smallest, &largest);

    if (largest && smallest)
    {
        printf("largest = %d\nsmallest = %d\n", *largest, *smallest);
    }
    else
    {
        printf("Possibly an empty array.\n");
    }

    free(numbers);
    numbers = 0;
}

int main(int argc, char **argv)
{
    minMaxExample();
    string helloWorld = "Hello World";
    char *str = const_cast<char *>(helloWorld.c_str());
    reverse(str);
    cout << str << endl;
    return 0;
}
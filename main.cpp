#include <iostream>
#include <memory>
#include <string>
#include <vector> 

#include "lib/utilities.h"
using namespace std;

void vec()
{
    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();

    // resizes the vector size to 4
    g1.resize(4);

    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();

    // checks if the vector is empty or not
    if (!g1.empty())
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (int &it : g1)
        cout << it << " ";
    
    cout << endl;
}
void minMaxExample()
{
    auto size = 100L;
    auto numbers = (long *)malloc(size * sizeof(long));

    fillArray(numbers, size);

    long *smallest = nullptr, *largest = nullptr;

    minMax(numbers, numbers + size, &smallest, &largest);

    if (largest && smallest)
    {
        printf("largest = %ld\nsmallest = %ld\n", *largest, *smallest);
    }
    else
    {
        printf("Possibly an empty array.\n");
    }

    free(numbers);
}

int main(int argc, char **argv)
{
    vec();
    minMaxExample();
    string helloWorld = "Hello World";
    char *str = const_cast<char *>(helloWorld.c_str());
    reverse(str);
    cout << str << endl;
    return 0;
}
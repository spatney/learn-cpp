#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    auto number(10);
    auto message(" is the magic number.");

    cout << to_string(number) + message << endl;
    return 0;
}
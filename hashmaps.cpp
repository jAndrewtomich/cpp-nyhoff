#include <iostream>
#include <map>
#include <vector>
#include <cassert>

int main()
{

    int a[][3] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};


    int b[] = {7, 2, 4, 87, 32, 54, 166, 2, 53, 2, 9};

    int* c = new int[]{1, 2, 3, 4, 5};
    std::cout << sizeof(*c) << ' ' << c[0] << ' ' << sizeof(c) << '\n';
    delete[] c;

/*
    for (int i = 0; i < 3; ++i)
        std::cout << a[0][i] << '\n';

    std::cout << "The size of array a is: " << sizeof(a) << " bytes." << '\n';
    std::cout << std::endl;

    std::cout << "The size of array b is: " << sizeof(b) << " bytes." << '\n';
    std::cout << "The number of elements in array b is: " << sizeof(b) / 4 << "." << '\n';
    std::cout << std::endl;
*/

    std::map<int, std::string> m;

    m[0] = "Andrew";
    m[26] = "Tomich";

    // Search map for specific key using std::map<...>::iterator
    std::map<int, std::string>::iterator it = m.find(26);
    assert(it != m.end());
    std::cout << "Key: " << it->first << ", Value: " << it->second << '\n';

    // Iterate through map using range-based loop
    for (auto&& [first, second] : m)
    {
        std::cout << "first: " << first << ", second: " << second << '\n';
    }

    // Iterate through 2D array using range-based loop
    for (auto& x : a)
    {
        for (auto y : x)
        {
            std::cout << y << ' ';
        }
    }
    std::cout << std::endl;

    // Iterate through 1D array using range-based loop
    int i{0}, l{1}, r{5}; // -- try counter in order to select part of array -- //
    for (auto x : b)
    {
        if (i++ < l)
            continue;
        if (i > r + 1)
            break;
         
        std::cout << x << '\n';
    }
    std::cout << std::endl;

    return 0;
}
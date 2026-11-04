#include <iostream>
#include <vector>
#include <algorithm>

// bool sortForUs(int a, int b)
// {
//     // return a > b; // reverse sorting
//     return b - a > 0;
// }

int main(int argc, char const *argv[])
{
    std::vector<int> numbers = {7, 1, 2, 5, 9, 21, 3};
    std::sort(numbers.begin(), numbers.end(), [](int a, int b)
              { return a > b; });

    for (int num : numbers)
    {
        std::cout << num << std::endl;
    }

    return 0;
}
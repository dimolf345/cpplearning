#include <iostream>

int main(int argc, char const *argv[])
{
    // fixed length: int arr[5] = {1, 2, 4,5,6}
    int arr[] = {1, 4, 5, 6, 7, 8, 9};

    // calc the length of the array
    std::cout << (sizeof(arr) / sizeof(*arr)) << std::endl;
    int length = (sizeof(arr) / sizeof(*arr));
    //multidimensional array
    int tic[3][3] {
        {1, 2, 0},
        {1, 1, 2},
        {2, 2, 1}
    };

    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << std::endl;
    };

    for (int item: arr) {
        std::cout << item << std::endl; // short syntax
    };
    return 0;
}